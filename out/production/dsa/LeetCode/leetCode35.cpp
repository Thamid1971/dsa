#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,3,5,6};
    int target = 2;
    int start = 0;
    int end = nums.size() - 1;
    int pos = nums.size(); 
    while (start <= end )
    {
      int mid = start + (end - start)/2;
            if(nums[mid] < target){
                start = mid +1;
            }
            if(nums[mid] > target){
                end = mid -1;
                pos = mid;
            }  
    }  
    cout << "Result index/insert position: " << pos << endl;
    return 0;
}
