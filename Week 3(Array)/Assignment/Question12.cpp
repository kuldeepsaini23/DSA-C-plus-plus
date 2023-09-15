#include<iostream>
using namespace std;

//* Wave Print in a matrix
void wavePrint(int arr[][4], int row , int col){
  for (int i = 0; i < col; i++)
  {
    /* code */
    if((i&1)==0){//--->even number
      for (int j = 0; j < row; j++)
      {
        /* code */
        cout<<arr[j][i]<<" ";
      }
    }else{
      for (int j = row-1; j >= 0; j--)
      {
        /* code */
        cout<<arr[j][i]<<" ";
      }
    }
  }
  
}

//*HW--> Wave in rowise
// void wavePrint(int arr[][4], int row , int col){
//   for (int i = 0; i < row; i++)
//   {
//     /* code */
//     if((i&1)==0){//--->even number
//       for (int j = 0; j < col; j++)
//       {
//         /* code */
//         cout<<arr[i][j]<<" ";
//       }
//     }else{
//       for (int j = col-1; j >= 0; j--)
//       {
//         /* code */
//         cout<<arr[i][j]<<" ";
//       }
//     }
//   } 
// }




int main(){
 int arr[][4] = {
  {1,2,3,4},
  {5,6,7,8},
  {9,10,11,12},
 };

 int row = 3;
 int col = 4;

 wavePrint(arr,row,col);
      
 return 0;
}