#include<iostream>
#include<vector>
using namespace std;
 
 
int main(){
  
  int row =5;
  int col = 3;
  int** arr = new int*[5] ;

  for (int i = 0; i < row; i++)
  {
    /* code */
    arr[i] = new int[col];
  }

  //*Printing
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

  cout<<endl;
  
  //!2-d vwctor 
  // vector<vector<int>>srr (5, vector<int>(6,1));
  // for (int i = 0; i < srr.size(); i++)
  // {
  //   for (int j = 0; j < srr[i].size(); j++)
  //   {
  //     /* code */
  //     cout<<srr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  
  //!deallocate 2-d array
  for (int  i = 0; i < row; i++)
  {
    /* code */
    delete [] arr[i];
  }

  delete [] arr;
  
  
 return 0;
}