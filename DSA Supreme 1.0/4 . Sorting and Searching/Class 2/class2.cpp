#include <iostream>
#include <vector>
using namespace std;

//! Pivot Element
// int findPivot(vector<int> arr)
// {
//   int s = 0;
//   int e = arr.size()-1;

//   int mid = s + (e - s)/2;
//   while (s <= e)
//   {
//     if (mid+1<arr.size() && arr[mid] > arr[mid + 1])
//       return mid;

//     if (mid-1>=0 && arr[mid-1] > arr[mid])
//       return mid-1;

//     if(arr[s]>=arr[mid]){
//       e= mid-1;
//     }else{
//       s = mid+1;
//     }

//     mid = s + (e - s)/2;
//   }

//   return -1;
// }

//! Find Square root using Binary Seach
int findSqrt(int n)
{

  int ans = -1;
  int s = 0;
  int e = n;
  int target = n;

  while (s <= e)
  {
    int mid = s + (e - s) / 2;

    if (mid * mid == target)
    {
      return mid;
    }
    if (mid * mid > n)
    {
      // *left search
      e = mid - 1;
    }
    else
    {
      // *Answer store
      ans = mid;
      // *Right search
      s = mid + 1;
    }
  }
  return ans;
}

int main()
{

  //! Pivot Element
  // vector<int> arr{3, 4, 5, 6, 7, 1, 2};

  // int ans = findPivot(arr);

  // cout << "Pivot Element is " << ans << endl;

  //! Search in a rotated array(Leetcode): https://leetcode.com/problems/search-in-rotated-sorted-array/solutions/

  //! Find Square root using Binary Seach;
  int n;
  cout << "Enter the numer" << endl;
  cin >> n;

  int precisoin;
  cout << "enter the number for precision you want " << endl;
  cin >> precisoin;
  
  int ans = findSqrt(n);
  cout << "Ans is " << ans << endl;
  double finalAns = ans;

  double step = 0.1;
  for (int i = 0; i < precisoin; i++)
  {
    for (double j = finalAns; j*j <= n ; j = j+step)
    {
      /* code */
      finalAns = j;
    }
    step = step/10;
  }

  cout<<"Final ans is "<<finalAns<<endl;
  
  return 0;
}