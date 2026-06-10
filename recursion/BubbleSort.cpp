#include <iostream>
#include <vector>
using namespace std;

void bubble(int n, vector<int>& nums) {
    if (n == 1) return;

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            swap(nums[i], nums[i + 1]);
        }
    }

    bubble(n - 1, nums);
}

int main() {
    vector<int> nums = {5, 1, 4, 2, 3};
    int n = nums.size();

    bubble(n, nums);

    cout << "array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}