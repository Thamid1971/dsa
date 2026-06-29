#include <iostream>
#include <vector>
using namespace std;

void findlist(vector<int>& arr, int target, vector<int>* result, int i = 0) {
    if (i == arr.size()) {
        return;
    }

    if (arr[i] == target) {
        result->push_back(i);
    }

    findlist(arr, target, result, i + 1);
}

int main() {
    vector<int> nums = {1, 2, 4, 2, 5, 3, 2, 4, 5, 4, 2, 2, 3, 4, 5};

    vector<int> result;
    findlist(nums, 2, &result);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}