#include <iostream>
#include <vector>
using namespace std;

int bs(int l, int r, int target, const vector<int>& nums) {
    if (l > r) return -1;

    int mid = l + (r - l) / 2;

    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] < target) {
        return bs(mid + 1, r, target, nums);
    } else {
        return bs(l, mid - 1, target, nums);
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << bs(0, nums.size() - 1, 8, nums) << endl;

    return 0;
}