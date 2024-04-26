#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
   int minAddToMakeValid(string s) {
        // stack<char> st;
        int openBracket = 0;
        int count = 0;
        for(auto i:s){
            if(i == '('){
                // st.push(i);
                openBracket++;
            }
            else{
                // if(st.size() == 0){
                //     count++;
                // }
                if(openBracket == 0){
                  count++;
                }
                else{
                    // st.pop();
                    openBracket--;
                }
            }
        }

        // return st.size() + count;
        return openBracket + count;
    }
 
int main(){
 string s = "())";
 cout << minAddToMakeValid(s);
      
 return 0;
}