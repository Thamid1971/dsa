#include <iostream>
using namespace std;

int count(int n,int steps = 0) {
    if (n == 0)
    {
        return steps;
    }
    if (n%2 == 0)
    {
       return count(n/2,++steps);
    }
    return count(n-1,++steps);
    
}

int main() {
    cout<< count(14);
    return 0;
}