#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        unordered_map<int,vector<int>> busStoptoId;
        for(int i=0;i<routes.size();i++){
            int bid=i;
            vector<int> busStops=routes[i];
            for(auto j:busStops){
                busStoptoId[j].push_back(bid);
            }
        }
        queue<pair<int,int>> q;
        unordered_map<int,bool> bVis, bStopVis;
        q.push({source,0});
        bStopVis[source]=true;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                pair<int,int> p=q.front();
                q.pop();
                int curStop=p.first;
                int busTravel=p.second;
                if(curStop==target){
                    return busTravel;
                }
                for(auto bus:busStoptoId[curStop]){
                    if(bVis[bus]) continue;
                    bVis[bus]=true;
                    for(auto busStop: routes[bus]){
                        if(bStopVis[busStop]) continue;
                        bStopVis[busStop]=true;
                        q.push({busStop,busTravel+1});
                    }
                }
            }
        }
        return -1;
        
    }
};