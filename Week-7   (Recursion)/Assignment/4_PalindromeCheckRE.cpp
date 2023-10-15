#include<iostream>
using namespace std;

//* Palindrome String
bool isPalidrome(string &s, int start, int end){
  //Base Case
  if(start>=end){
    return true;
  }

  //Processing 
  if(s[start] != s[end]){
    return false;
  }

  return isPalidrome(s,start+1, end-1);
}
 
int main(){
 //* Palindrome String
  string s = "racrecar";
 cout<<isPalidrome(s,0, s.size()-1);
  // if(){
  //   cout<<"YES"<<endl;
  // }
  // else{
  //   cout<<"NO"<<endl;
  // }

 return 0;
}