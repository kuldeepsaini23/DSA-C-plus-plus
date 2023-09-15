#include <iostream>
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

//* 1. Print Column-wise Sum
void printColumnSum(int arr[][4], int row, int col)
{

  for (int i = 0; i < col; i++)
  {
    int sum = 0;
    /* code */
    for (int j = 0; j < row; j++)
    {
      /* code */
      sum += arr[j][i];
    }
    cout << "The Sum of this Column is: " << sum << endl;
  }
}


//* 2. Diagonal Sum
void anotherDiagonalSum(int arr[][4], int row, int col){
  int sum = 0;
  for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = 0; j < col; j++)
    {
      /* code */
  
      if(i+j == row-1){  
        sum+=arr[i][j];
      }
      
    }
  
  }
  cout<<"The sum another Diagonals is: "<<sum<<endl;
}

//* 3. Transpose(Left half Triangle)
void transpose(int arr[][4], int row , int col){

  cout<<"Printing Before Transpose"<<endl;
  printArray(arr,row,col);
 for (int i = 0; i < row; i++)
  {
    /* code */
    for (int j = 0; j <= i; j++)
    {
      /* code */
      swap(arr[i][j] , arr[j][i]);      
    }
    
  }
  cout<<"Printing After Transpose"<<endl;
  printArray(arr,row,col);
  
}

int main()
{
  //!Homework
  int arr[][4] = {
      {10, 20, 30, 40},
      {50, 60, 70, 80},
      {90, 100, 110, 120},
      {130,140,150,160},
  };
  int row = 4;
  int col = 4;
  
  //* 1. Print Column-wise Sum
  // printColumnSum(arr, row, col);

  //* 2. Print Another Diagonal Sum
  anotherDiagonalSum(arr, row,col);

  //* 3. Transpose(Left Half Triangle)
  // transpose(arr, row, col);

  return 0;
}