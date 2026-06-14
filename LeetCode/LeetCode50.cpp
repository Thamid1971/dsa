#include <iostream>
using namespace std;

double mypow(double x, int n){
    if(n == 0){
        return 1;
    }
    if (n < 0)
    {
      return 1.0/mypow(x,-n);
    }
    
    double half = mypow(x,n/2);

    if(n % 2 == 0){
       return half * half;
    }
    return x * half * half;
}

int main() {
    cout<< mypow(4,-4) <<endl;
    return 0;
}