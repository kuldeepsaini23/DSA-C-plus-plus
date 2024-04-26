#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
     vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>warm(temperatures.size(),0);


        // O(n^2) -> TLE -> Brute force
        // for(int i=0; i< temperatures.size()-1; i++){
        //     int count =1;
        //     for(int j=i+1; j< temperatures.size(); j++){
        //         if(temperatures[i]<temperatures[j]){
        //             warm[i] = count;
        //             break;
        //         }
        //         else{
        //             count++;
        //         }
        //     }   
        // }


        //Stack
        // stack<int> stack;
        // for(int i = 0; i < temperatures.size(); i++){
        //     int currTemp  = temperatures[i];
        //     while(!stack.empty() && currTemp > temperatures[stack.top()]){
        //         warm[stack.top()] = i - stack.top();
        //         stack.pop();
        //     }
        //     stack.push(i);
        // }



        //Dequeue (Stack can also work on same code)
        deque<int> deque;
         for (int i = temperatures.size() - 1; i >= 0; --i) {
            if (deque.empty()) {
                deque.push_front(i);
                warm[i] = 0;
            } else {
                while (!deque.empty() && temperatures[i] >= temperatures[deque.front()]) {
                    deque.pop_front();
                }

                if (deque.empty()) {
                    warm[i] = 0;
                } else {
                    warm[i] = deque.front() - i;
                }

                deque.push_front(i);
            }
        }
        
        return warm;
    }
 
int main(){

  vector<int> temperatures = {73,74,75,71,69,72,76,73};
  vector<int> ans = dailyTemperatures(temperatures);
  for(auto i:ans){
    cout << i <<" , ";
  }
 
      
 return 0;
}