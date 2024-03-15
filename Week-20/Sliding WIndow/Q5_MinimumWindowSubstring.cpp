#include<iostream>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;

//* Minimum Window Substring

string minWindow(string s, string t) {
  //Invalid Case
  int len1 = s.length();
  int len2 = t.length();
  int start = 0;

  if(len1 < len2){
    return "";
  }

  //valid case
  int ansIndex = -1;
  int ansLen = INT_MAX;

  unordered_map<char,int> sMap;
  unordered_map<char,int> tMap;

  //store freq of pattern string
  for(char ch:t){
    tMap[ch]++;
  }

  //initialise count variable, this basically shows count of actual pattern vali string k character present in the current window
  int count = 0;

  // for(int i=0; i< s.length(); i++){
  int e = 0;
  while(e < s.length()){
    char ch = s[e];
    //update freq in sMap
    sMap[ch]++;
    if(sMap[ch] <= tMap[ch]){
      //valid character
      count ++;
    }


    if(count == len2){
      //window found krli hai jisme poora pattern exist krta hai
      //* Minimize --> sird uss condition me higa jab s index par jo character present hai vo ya toh extra hai ya faltu hai
      while(sMap[s[start]] > tMap[s[start]] ){
        //|| tMap[s[start]] == 0 donot need this
        // if(sMap[s[start]] > tMap[s[start]]){
          sMap[s[start]]--;
        // }
        start++;
      } 

      //ans
      // int windowLength = i - start + 1;
      int windowLength = e - start + 1;
      if(windowLength < ansLen){
        ansLen = windowLength;
        ansIndex = start;
      }

    }
    e++;
  }
  if(ansIndex == -1){
    return "";
  }

  return s.substr(ansIndex,ansLen);
}
 
int main(){
  string s = "ADOBECODEBANC";
  string t = "ABC";

  string ans = minWindow(s,t);

  cout << ans;
      
 return 0;
}