#include <iostream>
#include <vector>
using namespace std;

void sum(vector<int>& candidates,
         int target,
         int start,
         vector<vector<int>>& result,
         vector<int>& path,
         int sumSoFar = 0) {

    if (sumSoFar == target) {
        result.push_back(path);
        return;
    }

    if (sumSoFar > target) {
        return;
    }

    for (int i = start; i < candidates.size(); i++) {
        path.push_back(candidates[i]);
        sumSoFar += candidates[i];

        sum(candidates, target, i, result, path, sumSoFar);

        sumSoFar -= candidates[i];
        path.pop_back();
    }
}

int main() {
    vector<int> candidates = {2, 3, 5};
    int target = 8;

    vector<vector<int>> result;
    vector<int> path;

    sum(candidates, target, 0, result, path);

    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}