#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    int n = nums.size();

    for(int i = 0; i < n - 1; i++) {
        int smallest = i;

        for(int j = i + 1; j < n; j++) {
            if(nums[j] < nums[smallest]) {
                smallest = j;
            }
        }

        swap(nums[i], nums[smallest]);
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}