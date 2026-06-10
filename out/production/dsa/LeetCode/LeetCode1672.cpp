#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;

        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            if (sum > ans) {
                ans = sum;
            }
        }

        return ans;
    }
};
int main() {
    Solution ola;
    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};
    cout << "The maximum wealth is: " << ola.maximumWealth(accounts) << endl;
    return 0;
}