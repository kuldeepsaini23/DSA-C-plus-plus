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
int firstRepeatedWithHash(int arr[], int n){
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


//*Making Hashing
int firstRepeatedWithCustomHash(int arr[], int n,int maxElement){

  int hash[maxElement+1];
  for (int i = 0; i < maxElement+1; i++)
  {
    /* code */
    hash[i] = -1;
  }
  
  int ans = INT_MAX;

  //Doing count of each element
  for (int i = 0; i < n; i++)
  {
    /* code */
    int index = arr[i];

    if(hash[index]<0){
      hash[index] = i;
    }else{
      ans = min(ans,hash[index]);
      cout<<"Answer after storing min "<<ans<<endl;
    }
  }


  for (int i = 0; i < maxElement+1; i++)
  {
    /* code */
    if(ans == hash[i]){
      ans = i;
      break;
    }
  }
  return ans;
}


int maximumElement(int arr[], int n)
{
    int i;
 
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 

int main(){
  // int arr[] = {1,5,3,4,3,5,6};
  int arr[] = {1,2,2,1};  
  int size = sizeof(arr)/sizeof(int);
  // cout<<firstRepeated(arr,size)<<endl;
  // cout<<firstRepeatedWithHash(arr,size)<<endl;

  //* Custom hashing
  int largest = maximumElement(arr,size);
  cout<<firstRepeatedWithCustomHash(arr,size,largest);
      
 return 0;
}