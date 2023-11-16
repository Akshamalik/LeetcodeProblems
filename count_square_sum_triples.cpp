#include<bits/stc++.h>
using namespace std;


class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int a=1;a<=n;a++){
            for(int b=a+1;b<=n;b++){
                int sqsum=(a*a)+(b*b);
                int c=sqrt(sqsum);
                if(c*c==sqsum && c<=n )
                {
                    count+=2;
                }
            }
        }
        return count;
    }
};