#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        //1. push element
        q.push(t);

        //2. Pop invalid req older, older than t - 3000 
        while(!q.empty()){
          if(t-3000 > q.front()){
            q.pop();
          }
          else{
            break;
          }
        }

        //3. now q has only no of recent calls: R = [t-3000, t]
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */