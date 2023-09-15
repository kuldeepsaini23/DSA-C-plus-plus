#include<iostream>
#include <limits.h>
using namespace std;
 
 
//*Function to Print Array
void printArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  
}

//*LINEAR SEARCH
//present--> true
//absent-->false
bool linearSearch(int arr[], int size, int target){
  for (int i = 0; i < size; i++)
  {
    /* code */
    if(arr[i] == target){
      return true;
    }
  }
  return false;
}

//* 3. Count 0's and 1's
void countZeroOne(int arr[], int size){
  int zeroCount = 0;
  int oneCount = 0;

  for (int i = 0; i < size; i++)
  {
    /* code */
    if(arr[i]==0){
      zeroCount++;
    }
    if(arr[i]==1){
      oneCount++;
    }
  }
  
  cout<<"Zero Count: "<<zeroCount<<endl;
  cout<<"One Count: "<<oneCount<<endl;
}

//* 4. Minimum number in an Array
int findMinimumInArray(int arr[], int size){
  //ans store variable
  int minAns = INT_MAX;

  for (int i = 0; i < size; i++)
  {
    /* code */
    if(arr[i]<minAns){
      minAns = arr[i];
    }
  }

  /**************or************/
  for (int i = 0; i < size; i++)
  {
    /* code */
    minAns = min(minAns,arr[i]);
  }

  return minAns;
}


//* 5. Reverse an Array
void reverseArray(int arr[], int size){

  //with for loop
  // for (int left = 0, right=size-1; left <= right; left++, right--)
  // {
  //   /* code */
  //   swap(arr[left], arr[right]);
  // }
  
  //With While Loop
  int left = 0;
  int right = size-1;

  while(left<=right){
    swap(arr[left],arr[right]);
    left++;
    right--;
  }

  //printting array 
  printArray(arr,size);
}


//* 6. Extreme print in an Array
void extremePrint(int arr[], int size){

  int left = 0;
  int right = size-1;

  while(left<=right){
    if(left == right){
      cout<<arr[left]<<endl;//-->or print arr[right]
    }else{
      cout<<arr[left]<<endl;
      cout<<arr[right]<<endl;
    }
    left++;
    right--;
  }

}


int main(){
  //!Arrays

  //* Array Creation
  // int arr[101];
  // char ch[102];
  // bool flags[223];
  // long num[900];
  // short snum[1000];

  //* Address of and size of operator
  // int a = 5;
  // cout<<&a<<endl;
  // cout<<sizeof(a)<<endl;

  // int arr[10];
  // cout<<"Base address of arr is: "<<&arr<<endl;
  // cout<<sizeof(arr)<<endl;

  //* Array Initialisation

  // int arr[] = {1,2,3,4,5};

  // int brr[5] = {1,2,3,4,5};

  // int crr[5] = {1,2};

  // int drr[2] = {1,2,3,4,5};-->Error

  //* Index in Array
  // int arr[5] = {5,8,9,12,13};

  // cout<<arr[0]<<endl;
  // cout<<arr[1]<<endl;
  // cout<<arr[2]<<endl;
  // cout<<arr[3]<<endl;
  // cout<<arr[4]<<endl;

  //* Printing an Array
  // int n = 5;
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<endl;
  // }
  
  //* input in an Array
  // int  arr[5];

  //   int n = 5;
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<"Enter the value for index "<<i<<": ";
  //   cin>>arr[i];
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<" ";
  // }
  
  //TODO: 1. Doubling the array input
  // int arr[10];
  // int n=10;
  //Taking input in array
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<"Enter the value for index "<<i<<": ";
  //   cin>>arr[i];
  // }

  //Printing an array
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   arr[i] = 2*arr[i];
  //   cout<<arr[i]<<endl;
  // }

  //TODO: 2. Printing sum off the array elements
  // int arr[5];
  // int n=5;
  //Taking input in array
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   cout<<"Enter the value for index "<<i<<": ";
  //   cin>>arr[i];
  // }

  // int sum = 0;
  //Printing an array
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   sum+= arr[i];
  // }

  // cout<<"The Toatl sum of all the elments of Array is: "<<sum<<endl;

  //* LINEAR SEARCH
  // int arr[5] = {2,4,6,8,10};
  // int target = 10;

  // int size = 5;

  //0 Not Found
  //1 --> Found
  // bool flag = 0;

  // for (int i = 0; i < size; i++)
  // {
  //   /* code */
  //   if(target == arr[i]){
  //     flag = 1;
  //     break;
  //   }
  // }

  // if(flag){
  //   cout<<"Target is present in the array"<<endl;
  // }else{
  //  cout<<"Target is not present in the array"<<endl;
  // }

  
  //Printing array through printArray function call
  // printArray(arr,5);

  // bool ans = linearSearch(arr,size,target);
  // if(ans){
  //   cout<<"Target Found"<<endl;
  // }else{
  //   cout<<"Target Not Found"<<endl;
  // }


  //TODO: 3. Count 0's and 1's
  // int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};
  // zero=> 7
  // One =>8
  // int size = 15;
  // countZeroOne(arr,size);

  //TODO: 4. Minimum number in an Array
  // cout<<INT_MIN<<endl;
  // cout<<INT_MAX<<endl;

  // int arr[] = {10,8,31,4,3,1,-51};
  // int size = 7;

  // int minimumAns = findMinimumInArray(arr, size);
  // cout<<minimumAns<<endl;

  //TODO: 5. Reverse an Array
  // int arr[6] = {10,20,30,40,50,60};
  // int size = 6;

  // int brr[7] = {10,20,30,40,50,60,70};
  // int size2 = 7

  // reverseArray(brr, size);
  // reverseArray(brr, size2);

  //TODO: 6. Extreme print in an Array
  int arr[6] = {10,20,30,40,50,60};
  int size = 6;

  int brr[7] = {10,20,30,40,50,60,70};
  int size2 = 7;

  extremePrint(brr, size2);


      
 return 0;
}