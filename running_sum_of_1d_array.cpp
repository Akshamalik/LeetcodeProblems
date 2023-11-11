#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> s;
        for(int i=0;i<nums.size();i++){
            int sum=0;
           for(int j=i;j>=0;j--){
               sum=sum+nums[j];
           }
           s.push_back(sum);
        }
        return s;
    }
};