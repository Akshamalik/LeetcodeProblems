#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int digit;
        int y=x;
        do{
            digit=x%10;
            rev=(rev*10)+digit;
            x=x/10;
        }while( x!=0);
        
        if(rev==y && y>=0){
            return true;
        }
        return false;
    }
};