#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
       unordered_map<int,pair<int,int>> mp;
       for(char p='a';p<='z';p++)
       {
           mp[p]={-1,-1};
       }
       int n=s.length();
       for(int i=0;i<n;i++){
           char p=s[i];
           if(mp[p].first==-1)
              mp[p].first=i;
       }

       for(int i=n-1;i>=0;i--){
           char p=s[i];
           if((mp[p].second)==-1)
           mp[p].second=i;
      }
    int ans=0;
    for(auto c:mp){
        char p=c.first;
        int start=c.second.first;
        int end=c.second.second;

        unordered_set<int> st;
        for(int i=start+1;i<end;i++){
            st.insert(s[i]);
        }
        ans+=st.size();
    }
    return ans;

    }
};