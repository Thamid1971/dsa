#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums1 = {1, 2, 4, 9};
    vector<int> nums2 = {7, 8, 10, 12,16};
    vector<int> result = {};

    int p1 =0;
    int p2 =0;

    for(int i=0; i<(nums1.size() + nums2.size()); i++){
        if(p1 == nums1.size()){
            result.push_back(nums2[p2]);
            p2++;
            continue;
        }
        if(p2 == nums2.size()){
            result.push_back(nums1[p1]);
            p1++;
            continue;
        }
        if (nums1[p1] < nums2[p2])
        {
          result.push_back(nums1[p1]);
          p1++;
        }else{
           result.push_back(nums2[p2]);
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