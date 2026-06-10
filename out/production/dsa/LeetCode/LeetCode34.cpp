#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> search(vector<int> &arr, int target)
    {
        int start = 0, end = arr.size() - 1;
        int s = -1, e = -1;
        vector<int> result = {};

        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
              end = mid-1;
              s = mid;
            }
            if (arr[mid] <target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            
        }

        for (int i = s; i < arr.size(); i++)
        {
            if (arr[i] == target)
            {
                e = i;
            }
            else
            {
                break;
            }
        }
        
        
        return {s, e};
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 9;
    vector<int> result = sol.search(arr, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}