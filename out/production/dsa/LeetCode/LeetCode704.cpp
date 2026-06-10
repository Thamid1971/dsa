#include<iostream>
#include<vector>

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() -1;

        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid]== target){
                return mid;
            }
            if(nums[mid] < target){
                start = mid +1;
            }
            if(nums[mid] > target){
                end = mid -1;
            }
        }
        return -1;
    }
};
int main(){
    Solution binary;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    std::cout << "Index of target " << target << " is: " << binary.search(nums, target) << std::endl;
    return 0;
}