#include <iostream>
using namespace std;

int rbs(int num,int left,int right){
    if (left > right) return false;
    
        int mid = left + (right -left) /2;

        if (mid * mid == num)
        {
            return true;
        }
        if (mid * mid < num){
            return rbs(num,mid+1,right);
        }else{
            return rbs(num,left,mid-1);
        }
}

int main() {
    int num = 14;

    cout<< rbs(num,0,num);
    return 0;
}