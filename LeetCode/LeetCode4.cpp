#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> num1 = {1, 2, 4, 9};
    vector<int> num2 = {7, 8, 10, 12,16};
    vector<int> result = {};

    int p1 =0;
    int p2 =0;

    for(int i=0; i<(num1.size() + num2.size()); i++){
        if(p1 == num1.size()){
            result.push_back(num2[p2]);
            p2++;
            continue;
        }
        if(p2 == num2.size()){
            result.push_back(num1[p1]);
            p1++;
            continue;
        }
        if (num1[p1] < num2[p2])
        {
          result.push_back(num1[p1]);
          p1++;
        }else{
           result.push_back(num2[p2]);
          p2++;
        }
        
    }

   int sum =0;
    for(int j=0; j<result.size(); j++){
       sum+=result[j];
    }
    cout << endl;
    float ans = sum/result.size();
    cout<< ans << endl;
    return 0;
}