#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

//* Majority Element
int majorityElement(vector<int> v){
  int cnt = 0;
  int el;
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    if(cnt==0){
      cnt = 1;
      el = v[i];
    }
    else if(v[i]==el){
      cnt++;
    }else{
      cnt--;
    }
  }
  
  //checking of the le is really the answer
  int count = 0;
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    if(v[i]==el) count++;

    if(count > (v.size()/2)){
      return el;
    }
  }
  return -1;
} 

//* Sorting Method
int majorityBySorting(vector<int>& v){
  sort(v.begin(), v.end());
  return v[(0+(v.size()))/2];
}

//* hashing Method
int majorityByHashing(vector<int>& v){
  unordered_map<int,int>hash;
  int n = v.size()/2;
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    hash[v[i]]++;
  }
  
  for(auto i:hash){
    if(i.second>(v.size()/2)){
      return i.second;
    }
  }
  return -1;
}

//* Brute Force
int bruteForce(vector<int>& v){
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    int count =0;
    for (int j = 0; j < v.size(); j++)
    {
      /* code */
      if(v[j]==v[i]){
        count++;
      }
    }
    if(count>(v.size()/2)){
      return v[i];
    }    
  }
  return -1;
}
 
int main(){
 
      
 return 0;
}