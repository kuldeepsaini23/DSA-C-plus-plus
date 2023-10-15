#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


//*Digits to Number
void printNumber(vector<int> nums, int index, int size, int& number){
  //Base Call
  if(index>=size){
    return;
  }

  //processing
  number = nums[index] + number*10;
  cout<<number<<endl;
  
  //Recrusive call
  printNumber(nums, index+1, size, number);

}

//* Print All Occurances in a String
void occurances(string s, char target, int index, int size, vector<int> &ans){
  //Base Case
  if(index>= size){
    return;
  } 

  //processing 
  if(s[index] == target){
    ans.push_back(index);
  }

  //Recrusive Call
  occurances(s,target,index+1,size,ans);

}
 
int main(){
  //* Digits to Number
  // vector<int> digit = {4,2,1,5};
  // int size = digit.size();
  // int index = 0;  
  // int number = 0;
  
  // printNumber(digit, index, size,number);
  // cout<<"THe main number "<<number;
      

  //* Print All Occurances in a String
  string str = "babbar";
  char target = 'a';
  int size = str.length();
  int index = 0;
  vector<int> ans;

  occurances(str,target,index,size,ans);

  for(auto index:ans){
    cout<<index<<" ";
  }

 return 0;
}