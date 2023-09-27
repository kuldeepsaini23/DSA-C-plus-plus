#include<iostream>
using namespace std;

bool checkPalidrome(string s, int i, int j){


  while(i<j){
    if(s[i]==s[j]){
      i++,j--;
    }else{
      return false;
    }
  }

  return true;
}
 
//* Valid Palidrome - II
bool validPalidrom(string s){
  int i =0;
  int j = s.length()-1;

  while(i<j){
    if(s[i]==s[j]){
      i++,j--;
    }else{
      //not equal, one removal allowed
      int a=10;

      //ith character
      bool ans1 = checkPalidrome(s,i+1,j);

      // check jth character
      bool ans2 = checkPalidrome(s,i,j-1);
      bool ans = ans1 || ans2;
      return ans;
    }
  }

  return true;
}


int main(){
 string str = "abcda";
 bool ans = validPalidrom(str);
 if(ans){
  cout<<"Yes ho skta hh"<<endl;
 }else{
  cout<<"Nhi ho skta hh"<<endl;
 }
      
 return 0;
}