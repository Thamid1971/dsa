#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> piles = {30,11,23,4,20};
    int h = 6;

    int left = 1;
    int right = *max_element(piles.begin(), piles.end());
    int ans = right;

    while(left <= right){
        int mid = left + (right - left) / 2;

        int hour = 0;
        for(int i = 0; i < piles.size(); i++){
            hour += (piles[i] + mid - 1) / mid;
        }

        if(hour <= h){
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ans;

    cout << ans << endl;
    return 0;
}