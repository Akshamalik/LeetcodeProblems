#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int prevel=0;
        int n=arr.size();
        for(auto & el:arr){
            el=min(el,prevel+1);
            prevel=el;
        }
        return arr[n-1];
        
    }
};