#include<bits/stc++.h>
using namespace std;

class Solution {
public:
bool Vowelcheck(char s){
return(s=='a'||s=='A'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U'||s=='e'||s=='E');
}
    string sortVowels(string s) {
        unordered_map<char,int> count;
        for(auto c:s){
           if(Vowelcheck(c))
           count[c]++;
        }
        string reqVowels="AEIOUaeiou";
        string ans=s;
        int j=0;
        for(int i=0;i<s.length();i++){
            if(!Vowelcheck(s[i])) continue;
            while(count[reqVowels[j]]==0)
            {
                j++;
            }
            ans[i]=reqVowels[j];
            count[reqVowels[j]]--;
        }
        return ans;
      
    }
};