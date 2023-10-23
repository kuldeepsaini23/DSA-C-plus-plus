#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//! Next Permutation
 
int main(){
  string a = "abc";
  cout<<a<<endl;
  while(next_permutation(a.begin(), a.end())){
    cout<<a<<endl;
  }
      
 return 0;
}