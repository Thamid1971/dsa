#include <iostream>
using namespace std;
int count(int r,int c){
    if(r==1 ||  c == 1){
        return 1;
    }
    int right = count(r,c-1);
    int down = count(r-1,c);
    int dig = count(r-1,c-1);
    return right + down + dig;
}
int main() {
    cout<< count(3,3);
    return 0;
}