#include<iostream>
#include<vector>
using namespace std;
 
//* Find in array
int find(int arr[], int size, int index, int target){
  //Base Case
  if(index>=size){
    return -1;
  }

  //Processing 
  if(arr[index] == target){
    return index;
  }

  //Recrusive call
  int ans = find(arr, size, index+1, target);
  return ans;
}


//* 
void occurnces(int arr[], int size, int index, int target){
  //Base Case
  if(index>=size){
    return ;
  }

  //Processing 
  if(arr[index] == target){
    cout<<index<<" ";
  }

  //Recrusive call
  occurnces(arr, size, index+1, target);
}


void storingOccurances(int arr[], int size, int index, int target, vector<int> &ans){
  //Base Case
  if(index>=size){
    return ;
  }

  //Processing 
  if(arr[index] == target){
    ans.push_back(index);
  }

  //Recrusive call
  storingOccurances(arr, size, index+1, target, ans);
}
 
int main(){
  //* Find in Array
  // int arr[] = {10,20,30,40};
  // int size = sizeof(arr)/sizeof(int);
  // int target = 20;
  // int index = 0;

  // cout<<find(arr,size,index,target);

  //* Print index of occurnces
  int arr[] = {10,20,30,40,10,29,10};
  int size = sizeof(arr)/sizeof(int);
  cout<<size<<endl;
  int target = 10;
  int index = 0;
  
  occurnces(arr,size,index,target);


  //* Stroing these Occurances
  vector<int> ans;
  storingOccurances(arr,size,index,target,ans);
  cout<<"\nThe values of vector: ";
  for (auto index:ans)
  {
    /* code */
    cout<<index<<" ";
  }
  
      
 return 0;
}