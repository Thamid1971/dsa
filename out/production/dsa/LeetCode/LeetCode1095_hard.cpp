#include<iostream>
#include <vector>
using namespace std;
int getIndex(vector<int>& arr, int target) {
    int st = 0, end = arr.size() - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr={1,2,3,4,5};
    int ans = getIndex(arr,5);
    cout<<ans;
    return 0;
}