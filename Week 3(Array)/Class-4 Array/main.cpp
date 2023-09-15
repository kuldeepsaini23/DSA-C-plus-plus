#include<iostream>
#include <limits.h>
#include <algorithm> 
using namespace std;
 
//Print Array
void printArray(int arr[], int n){
  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
//Print 2-D Array
void printArrayTwoD(int arr[][3], int row, int col){
  for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = 0; j < col; j++)
    {
      /* code */
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}


//* 1. Sorts 0's , 1's and 2's
void shiftNegativeOneSide(int arr[], int n){
  printArray(arr,n);
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    /* code */
    if(arr[i]<0){
      swap(arr[i],arr[j]);
      j++;
    }
  }
  printArray(arr,n);
}


//* 2. Sorts 0's , 1's and 2's
void sortColors(int arr[], int n){
  int l = 0;
  int r = n-1;
  int index = 0;
  

  while(index<=r){
    if(arr[index]==0){
      swap(arr[index],arr[l]);
      index++,l++;
    }
    else if(arr[index]==2){
      swap(arr[index],arr[r]);
      r--;
      //Catch no need to index--> index++
    }else{
      index++;
    }
  }

  printArray(arr,n);
}

//* 3. Rotate an Array
void rotateArray(int arr[], int n, int k){
  //* Method -1: Modulus(Better Approach)
  int ans[n];
  for (int index = 0; index < n; index++)
  {
    /* code */
    int newIndex = (index+k)%n;
    ans[newIndex] = arr[index];
  }

  //* Method-2: Temporary Array
  // int temp[k];
  // int size = n-k;
  // Storing it in Temp array
  // for (int i = 0; i < k; i++)
  // {
  //   /* code */
  //   temp[i] = arr[size];
  //   size++;
  // }

  // Rotating values in main araay
  // for (int i = n-1; i >= 1; i--)
  // {
  //   /* code */
  //   arr[i] = arr[i-k];
  // }
  // Storing temp array value into main array
  // for (int i = 0; i < k; i++)
  // {
  //   /* code */
  //   arr[i] = temp[i];
  // }
  
  printArray(arr,n);
}

//* 4. Missing Number
void missingNumber(int arr[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    /* code */
    sum+= arr[i];
  }
  
  int totalSum = ((n)*(n+1))/2;

  int ans = totalSum - sum;

  cout<<ans<<endl;
}

//* 5. Row with Maximum Ones
void rowWithMaximumOnes(int arr[][3], int row, int col){
  // oneCount--> will store max no of 1's in a row
  int oneCount = INT16_MIN;
  //rowNo--> will store index of max no of 1's walo row
  int rowNo = -1; 

  for (int i = 0; i < row; i++)
  {
    /* code */
    //har row ke start pe count ko 0 se initialize kra hh
    int count = 0;
    for (int j = 0; j < col; j++)
    {
      /* code */
      if(arr[i][j] == 1){
        count++;
      }
    }
    //after row completion, compare count and onecount
    if(count>oneCount){
      oneCount = count;
      rowNo = i;
    }
  }
  cout<<rowNo<<" "<<oneCount<<endl;
}

//* 6. Transpose array by 90 deg
void reverseArray(int arr[][3], int row, int col){
  int n = row;
  for (int i = 0; i < row; i++)
  {
    int start = 0;
    int end = col-1;
    /* code */
    while(start<end){
    swap(arr[i][start],arr[i][end]);
    start++;
    end--;

    }
  }

}

void transpose(int arr[][3], int row , int col){

  cout<<"Printing Before Rotating 90 deg"<<endl;
  printArrayTwoD(arr,row,col);
  for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = i; j < col; j++)
    {
      /* code */
      swap(arr[i][j] , arr[j][i]);      
    }
  }



  //Reverse
  // for (int i = 0; i < row; i++)
  // {
  //   /* code */
  //   reverse(arr[i],arr[i]+col);

  // }
  
  //* Reverse
  reverseArray(arr,row,col);

  cout<<"Printing After Rotating 90 deg"<<endl;
  printArrayTwoD(arr,row,col);
  
}


 
int main(){

  //!Questions

  //* 1. Negative to Positive Arrange
  // int arr[] = {23,-7,12,-10,11,40,60};
  // int n = 7;

  // shiftNegativeOneSide(arr,n);

  //* 2. Sorts 0's , 1's and 2's
  // int arr[] = {2,0,2,1,1,0};
  // int n = 6;

  // sortColors(arr,n);

  //* 3. Rotate an Array
  // int arr[] = {1,2,3,4,5,6};
  // int n = 6;
  // int k = 3;

  // rotateArray(arr,n,k);


  //* 4. Missing number
  // int nums[9] = {9,6,4,2,3,5,7,0,1};
  // int n= 9;
  // missingNumber(nums, n);

  //* 5. Row with maximum ones(2-D array Question)
  // int arr[][3] = {
  //   {1,0,0},
  //   {0,1,1}
  // };
  // int row = 2;
  // int col = 3;
  // rowWithMaximumOnes(arr, row, col);

  //* 6. Rotate 2-d Array by 90 Deg
   int arr[][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    };
  int row = 3;
  int col = 3;

  transpose(arr,row, col);

 return 0;
}