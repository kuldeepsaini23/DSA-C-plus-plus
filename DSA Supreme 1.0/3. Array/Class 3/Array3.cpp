#include <iostream>
#include <vector>
using namespace std;
//! RowSUm Print
// void printRowiseSum(int arr[][3], int rows, int cols)
// {
//   for (int i = 0; i < rows; i++)
//   {
//     int sum = 0;
//     for (int j = 0; j < cols; j++)
//     {
//       sum += arr[i][j];
//     }
//     cout << sum;
//     cout << endl;
//   }
// }

// //! Linear Search
// void linearSearch(int arr[][3], int rows, int cols, int key)
// {
//   for (int i = 0; i < rows; i++)
//   {

//     for (int j = 0; j < cols; j++)
//     {
//       if (key == arr[i][j])
//       {
//         cout << "Key is found on the position"
//              << "(" << i << "," << j << ")";
//         break;
//       }
//     }
//   }
// }

// //!Max and Min Elements
// void maxAndMin(int arr[][3], int rows, int cols){
//   int max = INT8_MIN;
//   int min = INT8_MAX;
//   for (int i = 0; i < rows; i++){
//    for (int j = 0; j < cols; j++)
//    {
//       if(arr[i][j]>max){
//         max = arr[i][j];
//       }

//       if(arr[i][j]<min){
//         min = arr[i][j];
//       }
//    }
   
//   }

//   cout<<"The Minimum Number from the Matrix is: "<<min<<endl;
//   cout<<"The Maximum Number from the Matrix is: "<<max<<endl;  
// }




// void transpose(int arr[][3], int rows, int cols, int transp[][3])
// {
//   for (int i = 0; i < rows; i++)
//   {

//     for (int j = 0; j < cols; j++)
//     {
//       transp[j][i]= arr[i][j];
//     }
//   }
// }

// void printArray(int arr[][3], int rows, int cols)
// {
//   for (int i = 0; i < rows; i++)
//   {

//     for (int j = 0; j < cols; j++)
//     {
//       cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }

int main(){

  //! 2-d Array
  //*declaring
  // int arr[3][3];

  // //*initialisation
  // int brr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  // //*Rowise
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //      cout<<brr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // //*Columnwise
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //      cout<<brr[j][i]<<" ";
  //   }
  //   cout<<endl;
  // }

  //! Input in 2-d array
  // int arr[4][3];
  // int rows = 4;
  // int columns =3;

  // //*Input Rowise
  // for (int i = 0; i < rows; i++)
  // {
  //   for (int j = 0; j < columns; j++)
  //   {
  //      cin>>arr[i][j];
  //   }

  // }
  // //*Printing Rowise
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //      cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // //*Columnwise
  // for (int i = 0; i <rows; i++)
  // {
  //   for (int j = 0; j < columns; j++)
  //   {
  //      cin>>arr[j][i];
  //   }

  // }
  // //*Agar inpit column wisse hi liya hh toh normal printing pe columnwise hi ayegaa agar columnwise cout kra toh rowsise aagayegaa output
  // for (int i = 0; i < 3; i++)
  // {
  //   for (int j = 0; j < 3; j++)
  //   {
  //      cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  //! Common input for every Question
  // int arr[3][3];
  // int rows = 3;
  // int columns = 3;
  // int key;

  //*Input Rowise
  // for (int i = 0; i < rows; i++)
  // {
  //   for (int j = 0; j < columns; j++)
  //   {
  //     cin >> arr[i][j];
  //   }
  // }
  // //*Printing Rowise
  // printArray(arr, rows, columns);

  //! RowSUm Print
  // printRowiseSum(arr, rows, columns);

  //! Linear Search
  // cin>>key;
  // linearSearch(arr, rows, columns, key);

  //! MAx and minimum element
  // maxAndMin(arr, rows, columns);

  //! Transpose
  // int trans[3][3];
  // transpose(arr, rows, columns, trans);
  // cout<<"after the transpose"<<endl;
  // printArray(trans, rows, columns);
  
  
  //!2-D vector i.e., Vectors of Vectors
  //*Easy Method
  // vector<vector<int> > arr;
  // vector<int> a{1,2,3};
  // vector<int> b{4,5,6};
  // vector<int> c{7,8,9};

  // arr.push_back(a);
  // arr.push_back(b);
  // arr.push_back(c);

  // for (int i = 0; i < arr.size(); i++)
  // {
  //   for (int j = 0; j < arr[i].size(); j++)
  //   {
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }


  //*Difficult Method
  int rows = 5;
  int columns = 5;
  vector<vector<int> > arr(rows, vector<int>(columns,-8));
  for (int i = 0; i < arr.size(); i++)
  {
    for (int j = 0; j < arr[i].size(); j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}