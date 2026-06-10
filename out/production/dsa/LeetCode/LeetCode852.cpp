#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;
        while (st < end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] < arr[mid + 1]) {
                st = mid + 1;
            } else {
                end = mid;
            }
        }
        return st;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {0, 2, 1, 0};
    cout << sol.peakIndexInMountainArray(arr) << endl; // Output: 1
    return 0;
}