#include <iostream>
using namespace std;

int count(int n,int c =0) {
    if(n == 0){
        return c;
    }
    if(n % 10 == 0){
        c++;
    }
    return count(n/10,c);
}

int main() {
   cout<< count(000000);

    return 0;
}