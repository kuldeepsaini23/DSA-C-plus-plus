#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
//* Find first Repeating Element
int firstRepeated(int arr[], int n) {
  // code here
  for (int i = 0; i < n; i++)
  {
    /* code */
    for (int j = i+1; i < n; i++)
    {
      /* code */
      if(arr[i]==arr[j]){
        return i;
      }
     
    }
    
  }
  return -1;
}

//*Hashing Method
int firstRepeatedwithHash(int arr[], int n){
  unordered_map<int,int> hash;
  for (int i = 0; i < n; i++)
  {
    /* code */
    hash[arr[i]]++;
  }
  
  for (int i = 0; i < n; i++)
  {
    /* code */
    if(hash[arr[i]]>1){
      return i;
    }
  }
  return -1;
}



int main(){
  int arr[] = {1,5,3,4,3,5,6};
  int size = sizeof(arr)/sizeof(int);
  cout<<firstRepeated(arr,size)<<endl;
  cout<<firstRepeatedwithHash(arr,size)<<endl;
      
 return 0;
}