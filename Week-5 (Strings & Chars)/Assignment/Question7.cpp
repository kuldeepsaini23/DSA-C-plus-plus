#include<iostream>
using namespace std;

//! Longest palidrome Strings

//* Brute Force
// bool isPalidromic(string& s, int i, int j){
//   while(i<j){
//       if(s[i]==s[j]){
//           i++,j--;
//       }else{
//           return false;
//       }
//   }
//   return true;
// }


// string longestPalindrome(string s) {
//   string ans = "";
//   for(int i=0; i<s.size();i++){
//     for(int j=i; j<s.size();j++){
//       if(isPalidromic(s,i,j)){
//         string t = s.substr(i,j-i+1);
//         ans = t.size() > ans.size() ? t : ans;
//       }
//     }
//   }

//   return ans;
// }


//* Odd/Even Number
bool isPalidromic(string& s, int i, int j){
  while(i<j){
    if(s[i]==s[j]){
      i++,j--;
    }else{
      return false;
    }
  }
  return true;
}

string longestPalindrome(string s) {
  string ans = "";
  for(int i=0; i<s.size();i++){
    for(int j=i; j<s.size();j++){
      
    }
  }

  return ans;
} 
 
int main(){
  string s = "babad";
  cout<<longestPalindrome(s);
      
 return 0;
}