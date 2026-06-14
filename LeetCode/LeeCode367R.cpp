#include <iostream>
using namespace std;

bool rs(long long num){
        if (num == 1)
        {
            return true;
        }
        if (num < 1 || num % 2 ==1)
        {
            return false;
        }
    return rs(num/2);    
}

int main() {
    int num = 12;

    cout<< rs(num);
    return 0;
}