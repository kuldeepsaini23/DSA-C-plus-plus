#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//* Subsequences of a String
void subsquences(string s){
  int n = s.length();
  int noOfSubsequences = (1<<n) - 1;
  cout<<"{ }\n";
  for(int i= 1; i<= noOfSubsequences; i++){
    int temp = i, j =0;
    while(temp>0){
      if(temp&1){
        cout<<s[j];
      }
      j++;
      temp = temp>>1;
    }
    cout<<"\n";
  }
}
 
int main(){
  //* Subsequences of a String
  string s = "abc";
  subsquences(s);

 return 0;
}