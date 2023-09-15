#include<iostream>
#include <bits/stdc++.h>
using namespace std;

 
//*Print an array
void printArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


//* 1. Print Pair Sum
void printSumOfAllPairs(int arr[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    /* code */
    for (int j = 0; j < size; j++)
    {
      /* code */
      sum+=arr[i]+arr[j];
      cout<<"("<<arr[i]<<", "<<arr[j]<<")--> "<<arr[i]+arr[j]<<endl;

    }
    cout<<endl;
  }
  cout<<"Total Sum-->"<<sum<<endl;
}

//* 2. Print triplet Sum
void printAllTripletsSum(int arr[], int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    /* code */
    for (int j = 0; j < size; j++)
    {
      /* code */
      for (int k = 0; k < size; k++)
      {
        /* code */
        sum+=arr[i]+arr[j]+arr[k];
        cout<<"("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<")-->"<<arr[i]+arr[j]+arr[k]<<endl;
      }
      cout<<endl;
    }
    cout<<endl;
  }
  cout<<"Total Sum-->"<<sum<<endl;
}




//* 3. Sorts 0's and 1's

  //TODO: Sorting by Two Pointer
void sortZeroOneByTwoPointer(int arr[], int size){
  int left = 0;
  int right = size-1;

  while(left<=right){
    // if(arr[left]>arr[right]){
    //   swap(arr[left],arr[right]);
    //   left++;
    //   right--;
    // }else if(arr[left]<arr[right]){
    //   left++;
    // }else{
    //   if(arr[left] ==1){
    //    right --;
    //   }else{
    //     left++;
    //   }
    // }


    /********************or*******************/ 
     if(arr[left]>arr[right]){
      swap(arr[left],arr[right]);
      left++;
      right--;
    }else{
      if(arr[left] ==1 && arr[right]==1){
       right --;
      }else{
        left++;
      }
    }

  }

  //Printing Array
  printArray(arr, size);
}

  //TODO: Sort By sort() function
void sortZeroOneBySortFunction(int arr[], int size){
  sort(arr,arr+size);//Ye aise hi input leta hh

  //Printing Array
  printArray(arr, size);
}



//* 4. Shift array by 1 Element 
//*Left SHift
void shiftArrayByOneLeftShift(int arr[], int n){
  //Step 1
  int firstElement = arr[0];

  //Step 2 shift arr[i] = arr[i-1]
  for (int i = 0; i < n; i++)
  {
    /* code */
    arr[i] = arr[i+1];
  }

  //Step 3 copy lastelement into 0
  arr[n-1] = firstElement;

  //Print Array
  printArray(arr,n);
}

//* Shift Array by 2 Element(Right Shift)
void shiftArrayByTwo(int arr[], int n){
  //Step 1
  int temp[2]; 
  temp[0] = arr[n-2];
  temp[1] = arr[n-1];

  //Step 2 shift arr[i] = arr[i-1]
  for (int i = n-1; i >= 1; i--)
  {
    /* code */
    arr[i] = arr[i-2];
  }

  //Step 3 copy lastelement into 0
  arr[0] = temp[0];
  arr[1] = temp[1];

  //Print Array
  printArray(arr,n);
}



int main(){

  //* 1. Pair Sum
  // int arr[] = {10,20,30};
  // int n = 3;
  // printSumOfAllPairs(arr, n);


  //* 2. Triplet Sum  
  // int arr[] = {10,20,30};
  // int n = 3;
  // printAllTripletsSum(arr, n);


 //* 3. Sorts 0's and 1's
  int arr[] = {1,0,0,1,1,0,0,0,1};
  int n = 9;
  // int size = sizeof(arr)/sizeof(arr[0]);
  // cout<<arr<<endl;
  // cout<<arr+size<<endl;

    //*Sort by 2 pointer approach (H/W)
    sortZeroOneByTwoPointer(arr, n);

    //* sort by Inbuild sort function (H/W)
    // sortZeroOneBySortFunction(arr,n);

  //* 4. Shift array by 1 Element
  // int arr[] = {10,20,30,40,50,60};
  // int n = 6;
    //*Left Shift (H/W)
    // shiftArrayByOneLeftShift(arr,n);

  //*Shift array by 2 Element(H/W)
  // shiftArrayByTwo(arr,n);

      
 return 0;
}