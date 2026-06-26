#include <iostream>
using namespace std;

int countOperations(int num1, int num2,int steps =0) {
    if(num1 == 0 || num2 == 0){
        return steps;
    }
    if(num1 >= num2){
        return countOperations(num1 - num2,num2, ++steps);
    }
    return countOperations(num1,num2 -num1, ++steps);
}

int main() {
    cout<< countOperations(12,3);
    return 0;
}