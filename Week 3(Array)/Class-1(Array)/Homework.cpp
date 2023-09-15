#include<iostream>
#include <limits.h>
using namespace std;
 
int findMaximumInArray(int arr[], int size){
  int maxAns = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    /* code */
    maxAns = max(maxAns,arr[i]);
  }

  /**************or*************/
  // for (int i = 0; i < size; i++)
  // {
  //   /* code */
  //   if(arr[i]> INT_MIN){
  //     maxAns = arr[i];
  //   }
  // }
  


  return maxAns;
}

//*Swap number

  //* (i) Swap with +,-
  void swapWithPlusMinus(int a, int b){
    cout<<a<<" "<<b<<endl;
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<" "<<b<<endl;
  }

  //* (ii) With XOR
  void swapWithXOR(int a, int b){
    cout<<a<<" "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<a<<" "<<b<<endl;
  }

  //* (iii) With Temp
  void swapWithTemp(int a, int b){
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
  } 

 
int main(){
 
  //* 1. Max element from an Array
  
  // int arr[] = {10,8,31,4,3,1,-51};
  // int size = 7;

  // int minimumAns = findMaximumInArray(arr, size);
  // cout<<minimumAns<<endl;

  //* 2. Swap a and b
    //* (i) With +,-
    // swapWithPlusMinus(10,3);

    //* (ii) With XOR
    swapWithXOR(3,4);

    //* (iii) With Temp
    // swapWithTemp(3,10);



 return 0;
}