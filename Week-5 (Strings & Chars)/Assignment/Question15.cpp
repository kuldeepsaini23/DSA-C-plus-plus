#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

//! Remove All adjacent Duplicates in the String-II
//* Brute Force
bool areLastk_1CharsSame(string& ans, char newch, int k){
  int it = ans.size()-1;
  for(int i = 0; i<=k-1; i++){
    if(ans[it] != newch){
      return false;
      it--;
    }
  }
  return true;
} 


string removeDuplicates(string s, int k){
  string ans;
  for(int i=0; i<s.length(); i++){
    char&newch = s[i];
    if(ans.size()<k-1){
      ans.push_back(newch);
    }else{
      if(areLastk_1CharsSame(ans, newch, k-1)){
        for(int j=0; j<k-1; ++j){
          ans.pop_back();
        }
      }else{
        ans.push_back(newch);
      }
    }
  }
  return ans;
}

//* Stack Based
string removeDuplicates(string s, int k) {
  stack<pair<char,int>> st;
  st.push({'A',1});
  for(auto i:s){
      i==st.top().first?st.push({i,st.top().second+1}):st.push({i,1});
      if(st.top().second==k){
          int temp=k;
          while(temp--)st.pop();
      }
  }
  string str;
  while(st.top().first!='A'){
      str.push_back(st.top().first);
      st.pop();
  }
  reverse(str.begin(),str.end());
  return str;
}

//* Two pointer approach
string removeDuplicatesTwoPointer(string s, int k){
  int i=0, j=0;
  int n = s.length();
  vector<int>count(n);
  while(j<s.size()){
      s[i] = s[j];
      count[i] = 1;
      if(i>0 && s[i]==s[i-1]){
          count[i] += count[i-1];
      }
      if(count[i] == k){
          i-=k;   
      }
      ++i,++j;
  }
  return s.substr(0,i);
}



int main(){
 
  //* Remove All Adjacent Duplicates in the String-II
  string str = "deeedbbcccbdaa";
  int k = 3;

      
 return 0;
}