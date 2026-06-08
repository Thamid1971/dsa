#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    int n = nums.size();


for(int i=1; i<n-1; i++){
    for(int j=i; j>0; j--){
        if(nums[j] < nums[j-1]){
            swap(nums[j],nums[j-1]);
        }
    }
}

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}