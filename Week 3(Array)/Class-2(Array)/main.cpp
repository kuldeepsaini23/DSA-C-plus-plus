#include<iostream>
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


//* Array pass by refernce
void solve(int arr[], int n){
  arr[0] = 100;
}


//* 1. Find Unique Element
int getUniqueElement(int arr[], int size){
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    /* code */
    ans = ans^arr[i]; //because 0 ka xor with any number give that same number
  }
  return ans;
}


//* 2. Print All pairs
void printAllPairs(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    /* code */
    for (int j = 0; j < size; j++)
    {
      /* code */
      cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<", ";
    }
    cout<<endl;
  }
  
}
 
//* 3. Print All Triplets
void printAllTriplets(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    /* code */
    for (int j = 0; j < size; j++)
    {
      /* code */
      for (int k = 0; k < size; k++)
      {
        /* code */
         cout<<"("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<")"<<", ";
      }
      cout<<endl;
    }
    cout<<endl;
  }
  
}

//* 4. Sorts 0's and 1's 
  //TODO: Sorting by Counting
void sortZeroOneByCount(int arr[],int size){
  int zeroCount = 0;
  int oneCount = 0;

  //Step A: Count 0 and 1
  for (int i = 0; i < size; i++)
  {
    /* code */
    if(arr[i] ==0)
      zeroCount++;
    if(arr[i] == 1)
      oneCount++;  
  }

  //Step B: Place all zeros
  // int i;
  // for ( i = 0; i < zeroCount; i++)
  // {
  //   /* code */
  //   arr[i] = 0;
  // }
  

  // Step C: place all One
  // for ( int j = i; j < size; j++)
  // {
  //   /* code */
  //   arr[j] = 1;
  // }

  /**************************or**********=*****************/
  int index = 0;
  while(zeroCount--){
    arr[index] = 0;
    index++;
  }

  while(oneCount--){
    arr[index] = 1;
    index++;
  }
  
  //Print Array
  printArray(arr, size);
  
}



//* 5. Shift Array by 1 element (Right Shift)
void shiftArrayByOne(int arr[], int n){
  //Step 1
  int lastElement = arr[n-1];

  //Step 2 shift arr[i] = arr[i-1]
  for (int i = n-1; i >= 1; i--)
  {
    /* code */
    arr[i] = arr[i-1];
  }

  //Step 3 copy lastelement into 0
  arr[0] = lastElement;

  //Print Array
  printArray(arr,n);
}

//!HW
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



//! Main Function
int main(){

  //* Array pass by Refernce By Default
  // int n = 3;
  // int arr[] = {10,20,30};

  // cout<<"Before Function"<<endl;
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<" ";
  // }
  

  // solve(arr,n);

  // cout<<"\nAfter Function"<<endl;
  // Print array
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<" ";
  // }
  

  //! Questions
  //* 1. Find the Unique Element
  // int arr[] = {2,10,11,10,2,13,15,13,15};
  // int n = 9;

  // int finalAns = getUniqueElement(arr,n);
  // cout<<"Final Answer is: "<<finalAns<<endl;

  //* 2. Print All pairs
  // int arr[] = {10,20,30};
  // int n = 3;
  // printAllPairs(arr, n);

  //* 3. Print All Triplets
  // int arr[] = {10,20,30};
  // int n = 3;
  // printAllTriplets(arr, n);


  //* 4. Sorts 0's and 1's
  int arr[] = {0,1,0,1,1,0,0,0,0};
  int n = 9;
  // int size = sizeof(arr)/sizeof(arr[0]);
  // cout<<arr<<endl;
  // cout<<arr+size<<endl;

  //* Sorty by counting
  // sortZeroOneByCount(arr, n);

  //* 5. Shift array by 1 Element
  int arr[] = {10,20,30,40,50,60};
  int n = 6;
    //*Right Shift
    // shiftArrayByOne(arr, n);
    //*Left Shift (H/W)
    // shiftArrayByOneLeftShift(arr,n);

 return 0;
}