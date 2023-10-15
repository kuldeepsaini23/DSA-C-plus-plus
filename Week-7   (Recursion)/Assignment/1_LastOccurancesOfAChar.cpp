#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
//* Last Occurance 

//* Left to right
void lastOccLTR(string s, char x, int index, int& ans){
  //Base Case 
  if(index>=s.size()){
    return;
  }

  //processing
  if(s[index] == x){
    ans = index;
  }

  //Recrusive Call
  lastOccLTR(s,x,index+1, ans);
}

//* Right to Left
void lastOccRTL(string s, char x, int index, int& ans){
  //Base Case 
  if(index < 0){
    return;
  }

  //processing
  if(s[index] == x){
    ans = index;
    return;
  }

  //Recrusive Call
  lastOccRTL(s,x,index-1, ans);
}


int main(){
 //* Last Occurance
  string s;
  cin>>s;
  char x;
  cin>>x;
  int ans = -1;
  // lastOccLTR(s,x,0,ans);  
  // cout<<ans<<endl;    

  lastOccRTL(s,x,s.size()-1,ans);  
  cout<<ans<<endl;

  char *ch = strrchr(s,x);
 return 0;
}