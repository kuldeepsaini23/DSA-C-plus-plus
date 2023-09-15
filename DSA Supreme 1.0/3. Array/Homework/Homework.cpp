#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> arr)
{
  for (auto x : arr)
  {
    cout << x << " ";
  }
  cout << endl;
}

void printOneDArray(int *a, int n)
{
  for (int i = 0; i < n; i++)
  {
   cout<<a[i]<<" ";
  }
  
  cout << endl;
}

void printArray(int arr[][3], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {

    for (int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

//! Rotating 2-d matrix by 90 degree
// void rotating(int arr[][3], int rows, int cols, int rotat[][3])
// {
//   for (int i = 0; i < rows; i++)
//   {

//     for (int j = 0; j < cols; j++)
//     {
//       rotat[j][cols-1-i]= arr[i][j];
//     }
//   }
// }

//! Move all negative number to left side
  void moveAllNegToLeft(int *a, int n){
    // Dutch National flag algo
    int l = 0, h = n - 1;
    while (l < h){
      if (a[l] < 0){
        l++;
      }else if (a[h] > 0){
        h--;
      }else{
        swap(a[l], a[h]);
      }
    }
  }


int main()
{

  //  vector <int> arr{1,1,1,2,2,2,2,2,2,2,2,3,4,5};

  //! Rotate array by one element
  // printVector(arr);

  // int temp = arr[0];
  // for (int i = 0; i < arr.size()-1; i++){
  //   swap(arr[i],arr[i+1]);
  // }
  // arr[arr.size()-1] = temp;

  // printVector(arr);

  //@ Majority element in an array

  //! Majority Element in an array
  //    int ans = 0;
  //   for (int i = 0; i < arr.size(); i++){
  //    int count = 0;
  //    for (int j = 0; j < arr.size(); j++){
  //       if(arr[i] == arr[j]){
  //          count++;
  //       }
  //    }
  //       cout<<arr[i]<<": "<<count<<endl;

  //       int majority = count;
  //       if(majority > ans){
  //          ans = arr[i];
  //       }
  //  }

  //       cout<<"The majority element in the array is: "<<ans<<"at the index"<<endl;

  //! Rotating 2-d matrix by 90 degree

  //  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  //  printArray(arr,3,3);
  //  int rows = 3;
  //  int columns = 3;

  //  int rotate[3][3];
  //  rotating(arr, rows, columns, rotate);
  //  cout<<"after the rotating"<<endl;
  //  printArray(rotate, rows, columns);

  

  //! Zig Zag pattern
  // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // int rows = 3;
  // int columns = 3;
  // printArray(arr, 3, 3);
  // cout << endl;
  // for (int j = 0; j < columns; j++)
  // {
  //   if (j % 2 == 0)
  //   {
  //     for (int i = 0; i < rows; i++)
  //     {
  //       cout << arr[i][j] << " ";
  //     }
  //   }
  //   else
  //   {
  //     for (int i = rows-1; i >= 0; i--)
  //     {
  //       cout << arr[i][j] << " ";
  //     }
  //   }

  //! Sort colors and sort 0's, 1's and 2's
  //*In Leet code

  //! Move all negative number to left side
  // int a[] = {1, 2, -3, 4, -5, 6};
  // int n = sizeof(a)/ sizeof(int);

  // moveAllNegToLeft(a, n);

  // printOneDArray(a,n);

  //! Finde Duplicate Number
    //* In Leet code:- https://leetcode.com/problems/find-the-duplicate-number/

  return 0;
}