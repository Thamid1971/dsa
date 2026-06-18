#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int n = 5;
    int l = 0;
    int r = n;
    int res = 0; 

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int coin = (mid / 2) * (mid + 1);

        if (coin <= n)
        {
            res = max(mid, res);
            l = mid + 1; 
        } else {
            r = mid - 1;
        }
    }

    cout << r << endl;
    return 0;
}
