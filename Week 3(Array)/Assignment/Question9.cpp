#include<iostream>
using namespace std;

//* Missing Element from an array with Duplicate numbers
  //TODO: Can be done using sorting

  //TODO: Visited marking
void findMissing(int *arr, int n){

  for (int i = 0; i < n; i++)
  {
    /* code */
    int index = abs(arr[i]);
    if(arr[index-1]>0){
      arr[index-1] *= -1;
    }
  }

  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<" ";
  // }
  // cout<<endl;
  
  for (int i = 0; i < n; i++)
  {
    /* code */
    if(arr[i]>0){
      cout<<i+1<<" ";
    }
  }
}

//* Swaping 
void findMissingSwaping(int *arr, int n){
  int i = 0;
  while(i<n){
    int index = arr[i]-1;
    if(arr[index] != arr[i]){
      swap(arr[index],arr[i]);
    }else{
      i++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    /* code */
    if(arr[i]!=i+1){
      cout<<i+1<<" ";
    }
  }
  
}
 
int main(){

  int a[] = {1,3,3,3,4};
  int n = 5;
  // findMissing(a,n);
  findMissingSwaping(a,n);
 return 0;
}