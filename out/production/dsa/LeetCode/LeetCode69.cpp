#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int end = x;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(mid <= x / mid){
                if(mid == x / mid){
                    return mid;
                }
                start = mid + 1;
            } else {
                end = mid - 1;
            }
            if(mid <= x / mid && x < (mid + 1) * 1LL * (mid + 1)){
                return mid;
            }
        }
        return 0;
    }
};
int main() {
    Solution ola;
    int x = 8;
    cout << "The integer square root of " << x << " is: " << ola.mySqrt(x) << endl;
    return 0;
}