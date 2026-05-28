#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
         int count = 0;
    for(int i = 0; i < nums.size();i++){
       if (to_string(nums[i]).length() % 2 == 0 )
       {
        count++;
       }
            
    }

        return count;
    }
};
int main() {
    Solution ola;
    vector<int> nums = {12,345,2,6,7896};
    cout << "The count of numbers with even number of digits is: " << ola.findNumbers(nums) << endl;
    return 0;
}