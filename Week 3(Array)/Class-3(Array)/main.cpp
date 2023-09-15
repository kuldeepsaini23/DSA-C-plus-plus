#include<iostream>
#include <limits.h>
#include<vector>
using namespace std;
 
//printArray--> row wise
void printArray(int arr[][4], int row, int col){
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
 
//printArray--> Column wise
void printArrayColWise(int arr[][4], int row, int col){
  for (int i = 0; i < col; i++)
  {
    /* code */
    for (int j = 0; j < row; j++)
    {
      /* code */
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
  
}

//* LINEAR SEACRH in 2-D Array

bool findTarget(int arr[][4],int row, int col, int target){
  for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = 0; j < col; j++)
    {
      /* code */
      if(target == arr[i][j]){
        return true;
      }
    }
    
  }
  return false;
}

//* 1. Max no in an Array
int maxNumber(int arr[][4], int row, int col){
  int maxAns = INT_MIN;

  for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = 0; j < col; j++)
    {
      /* code */
      if( arr[i][j]>maxAns){
        maxAns = arr[i][j];
      }
    }
  }
  return maxAns;
}


//* 1.2 Min no in an Array
int minNumber(int arr[][4], int row, int col){
  int minAns = INT_MAX;

  for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = 0; j < col; j++)
    {
      /* code */
      if( arr[i][j]<minAns){
        minAns = arr[i][j];
      }
    }
  }
  return minAns;
}

//* 2. Print Row-wise Sum
void printRowSum(int arr[][4], int row, int col){
  
  for (int i = 0; i < row; i++)
  {
    int sum = 0;
    /* code */
    for (int j = 0; j < col; j++)
    {
      /* code */
      sum+= arr[i][j];      
    }
    cout<<"The Sum of this Row is: "<<sum<<endl;
  }
}

//* 3. Diagonal Sum
void diagonalSum(int arr[][4], int row, int col){
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    /* code */
    sum+=arr[i][i];
  }
  cout<<"The sum diagonals is: "<<sum<<endl;
}

//* 4. transpose of a Array(Upper triangle)
void transpose(int arr[][4], int row , int col){

  cout<<"Printing Before Transpose"<<endl;
  printArray(arr,row,col);
 for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = i; j < col; j++)
    {
      /* code */
      swap(arr[i][j] , arr[j][i]);      
    }
    
  }
  cout<<"Printing After Transpose"<<endl;
  printArray(arr,row,col);
  
}


int main(){
 //! 2-D Array
 //* Declare
//  int arr[3][3];
      
//*Initialization
  // int arr[3][4] = {
  //   {1,2,3,4},
  //   {5,6,7,8},
  //   {1,2,3,4},
  // };


  // int arr[][4] = {
  //   {1,2,3,4},
  //   {5,6,7,8},
  //   {1,2,3,4}
  // };

  // int row = 3;
  // int col = 4;

  //Check what will happen if row = 4 

  // printArray(arr, row, col);
  // printArrayColWise(arr, row,col);


  //* Input
  // int arr[3][4];
  // int row = 3;
  // int col = 4;

  //Row-wise
  // for (int i = 0; i < row; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < col; j++)
  //   {
  //     /* code */
  //     cin>>arr[i][j];
  //   }
  // }

  // printArrayColWise(arr,row,col);
  
  //Column-wise
  // for (int i = 0; i < col; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < row; j++)
  //   {
  //     /* code */
  //     cin>>arr[j][i];
  //   }
    
  // }
  
  // printArray(arr,row,col);



  int arr[][4] = {
    {10,20,30,40},
    {50,60,70,80},
    {90,100,110,120},
    {130,140,150,160},
  };
  int row = 4;
  int col = 4;

  //* LINEAR SEACRH in 2-D Array

  // int target = 120;

  // cout<<"Fount or Not: "<<findTarget(arr, row, col, target);

  //* 1. Max no in an Array
  // cout<<"The MAximum number is : "<<maxNumber(arr,row,col)<<endl;

  //* 1.2 Min no in an Array
  // cout<<"The Minimum number is : "<<minNumber(arr,row,col)<<endl;

  //* 2. Print Row-wise Sum
  // printRowSum(arr, row, col);
  //TODO: Print Col-wise Sum

  //* 3. Print Diagonal Sum
  diagonalSum(arr, row,col);
  //TODO: Print another digonal Sum


  //* 4. Transpose of a Matrix(Upper Triangle)
  // transpose(arr,row,col);
    //TODO: HW--> Lower Triangle


  //! 2-D Vectors
  //*initialization
  // vector< vector<int> > arr(5, vector<int>(10,0));
  //row-size--> arr.size()
  // for (int i = 0; i < arr.size(); i++){
  //   for (int j = 0; j < arr[i].size(); j++)
  //   {
  //     /* code */
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  //* Jagged Array
  // vector< vector<int>> brr;

  // vector<int> v1(10,1);
  // vector<int> v2(9,2);
  // vector<int> v3(8,3);
  // vector<int> v4(7,4);
  // vector<int> v5(6,5);

  // brr.push_back(v1);
  // brr.push_back(v2);
  // brr.push_back(v3);
  // brr.push_back(v4);
  // brr.push_back(v5);

  // for (int i = 0; i < brr.size(); i++){
  //   for (int j = 0; j < brr[i].size(); j++)
  //   {
  //     /* code */
  //     cout<<brr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }


 return 0;
}