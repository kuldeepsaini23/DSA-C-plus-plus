#include <iostream>
using namespace std;

int printArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  
}

// void inc(int arr[],int size){
//  arr[0] = arr[0]+10;
//  printArray(arr, size);
// }

//! Linear Search
// bool find(int arr[], int key, int size){
//   for (int i = 0; i < size; i++)
//   {
//     /* code */
//     if(arr[i]== key)
//     break; //TO optimize the code
//     return true;
//   }
//   return false;
// }

int main(){
  //!Array declare
   //* Array decleration
  // int a[7];
  // cout<<"Array declare successfully";

  //* Array initialisation
  // int arr[] = {2,4,6,8,10.12}

  //* Array index and accessing
  // int arr[] = {1,3,5,7,9};

  // for (int i = 0; i < 5; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<endl; 
  // }
  
  //* Taking input from user
  // int n;
  // cin>>n; //! Bad Pratice
  // int arr[5];
  // for (int i = 0; i < 5; i++)
  // {
  //   /* code */
  //   cin>>arr[i];
  // }
  
  // for (int i = 0; i < 5; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<", ";
  // }
  
  //! Functions in Array
  // int arr[]  = {5,6};
  // int size = 2;
  // inc(arr, size);
  // printArray(arr, size);

  //! Linear Search
  // int arr[5] = {1,3,5,7,8};
  // int size = 5;
  // cout<<"enter the key to find "<<endl;
  // int key;
  // cin>>key;

  // if(find(arr, key, size)){
  //   cout<<"Found";
  // }else{
  //   cout<<"Not Found";
  // }

  //! Count 0's and 1's
  // int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
  // int size = sizeof(arr)/sizeof(arr[0]);
  // cout<<size<<endl;
  
  // int numZero = 0;
  // int numOne = 0;

  // for (int i = 0; i < size; i++)
  // {
  //   /* code */
  //   if(arr[i] == 0){
  //     numZero++;
  //   }

    //*else isliye nhi liya kyuki agar mannlo 1 ke alva 2,3,4 bhi hota toh 1 me ++ kardeta agar elements only 0 and 1 hh toh lo if-else
    
  //   if(arr[i]==1){
  //     numOne++;
  //   }
  // }

  // cout<<"Number of Zeros is: "<<numZero<<endl;
  // cout<<"Number of Zeros is: "<<numOne<<endl;
  
  //! Minimum and Maximum numer in an array
  // int arr[] = {2,4,6,-11,3,7,9,12,56,43,21};
  // int size = sizeof(arr)/sizeof(arr[0]);
  // cout<<size<<endl;

  //initialize max number with minimum
  // int max_Number = INT8_MIN;
  // int min_Number = INT8_MAX;

  // for (int i = 0; i < size; i++)
  // {
  //   /* code */
  //   if(arr[i] > max_Number)
  //   {
  //     max_Number = arr[i];
  //   }

  //   if(arr[i] < min_Number)
  //   {
  //     min_Number = arr[i];
  //   }
  // }

  // cout<<"The Maximum Number from the array is: "<<max_Number<<endl;
  
  // cout<<"The Minmum Number from the array is: "<<min_Number;
  
  //!Extreme Print in an array
  // int arr[] = {10,20,30,40,50,60,70};
  // int size = 7;

  // int start = 0;
  // int end = size-1;

  // while(start<= end){
     // if(start>end){
     //   break;
     // }

  //   if(start == end){
  //     cout<<arr[start]<<" ";
  //   }else{
  //   cout<<arr[start]<<" ";
  //   cout<<arr[end]<<" ";
  //   }

  //   start++;
  //   end--;
  // }

  //! Reverse an array
   int arr[] = {10,20,30,40,50,60,70,80};
  int size = 8;

  int start = 0;
  int end = size-1;

  while(start<= end){
    // if(start>end){
    //   break;
    // }

   //* Step-1 Swap
    swap(arr[start], arr[end]);

    //*Step-2
    start++;

    //*Step-2
    end--;
  }

  printArray(arr, size);
  return 0;
}