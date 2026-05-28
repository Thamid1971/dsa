#include <iostream>
#include <vector>
using namespace std;

int floor(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] < target) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int ceiling(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] > target) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}


int main(){
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 9;
    int ans = floor(nums, target);
    cout << "Ceiling index: " << ans << endl;
    return 0;
}