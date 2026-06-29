#include <iostream>
#include <vector>
using namespace std;

int isSorted(vector<int> arr, int i = 1){
    if (i == arr.size()) {
        return 1;
    }

    if (arr[i-1] > arr[i])
    {
        return -1;
    }
    return isSorted(arr,i+1);
}

int main() {
    vector<int> nums = {1, 102, 3, 4, 5};
    int n = nums.size();

    cout << "array: ";
    // for (int i = 0; i < n; i++) {
    //     cout << nums[i] << " ";
    // }
    cout << isSorted(nums)<<endl;

    return 0;
}