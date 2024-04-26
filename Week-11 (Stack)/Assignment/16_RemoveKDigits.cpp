#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  string removeKdigits(string num, int k) {
        stack<char> st;
        for(auto digit:num){
          if(k>0){
            while(!st.empty() && st.top() > digit){
              st.pop();
              k--;
              if(k==0){
                break;
              }
            }
          }
            st.push(digit);
          
        }

        if(k > 0){
          while(!st.empty() && k){
            st.pop();
            k--;
          }
        }

      
        string ans = "";
        while(!st.empty()){
          ans += st.top();
          st.pop();
        }

        //removing leading zeros
        while(ans.size() > 0 && ans.back() == '0'){
          ans.pop_back();
        }
        
        //get real ans
        reverse(ans.begin(), ans.end());
        return ans == "" ? "0" : ans;

    }
 
 
int main(){
 string num = "10200";
 int k = 1;

 cout << removeKdigits(num, k);
      
 return 0;
}