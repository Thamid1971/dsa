#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    vector<int> num1 = {1, 3};
    vector<int> num2 = {2};
    
    if (num1.size() > num2.size()) {
        swap(num1, num2);
    }
    
    int total = num1.size() + num2.size();
    int half = total / 2;
    
    int l = 0;
    int r = num1.size();
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int midB = half - mid;
        
        int Aleft  = (mid > 0) ? num1[mid - 1] : INT_MIN;
        int Aright = (mid < num1.size()) ? num1[mid] : INT_MAX;
        
        int Bleft  = (midB > 0) ? num2[midB - 1] : INT_MIN;
        int Bright = (midB < num2.size()) ? num2[midB] : INT_MAX;
        
        if (Aleft <= Bright && Bleft <= Aright) {
            if (total % 2 == 1) {
                cout << min(Aright, Bright) << endl;
            } else {
                cout << (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0 << endl;
            }
            break;
        }
        else if (Aleft > Bright) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    
    return 0;
}