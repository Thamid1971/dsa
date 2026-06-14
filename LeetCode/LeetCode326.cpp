#include <iostream>
using namespace std;

int powerThree(int n){
    if (n ==1)
    {
        return true;
    }

    if(n %3 == 0){
        return powerThree(n/3);
    }
    return 0;
}

int main() {
    cout<< powerThree(7) <<endl;
    return 0;
}