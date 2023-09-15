#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//! Binary Search
// int binarySearch(int arr[], int size, int target){
//   int start = 0;
//   int end = size - 1;

//   int mid = start + (end - start) / 2; //!Why use mids this formula in copy page no- 120

//   while (start <= end){
//     int element = arr[mid];
//     if (target == element){
//       return mid;
//     }
//     else if (target > element){
      // search in Right
//       start = mid + 1;
//     }
//     else{
      // search in left
//       end = mid - 1;
//     }
//    mid = start + (end - start) / 2;
//   }
//   return -1;
// }


int firstOcurrance(vector <int> v, int target){
  int s = 0;
  int e = v.size()-1;
  int ans = -1;
  while(s<=e){
  int mid = s +(e-s)/2;
  int element = v[mid];

  if(element == target){
    ans = mid;
    e = mid-1;
  }else if(target>element){
    //*riht search
    s = mid+1;
  }else{
    //*left me search
    e = mid-1;
  }
  }
  return ans;
}


int lastOcurrance(vector <int> v, int target){
  int s = 0;
  int e = v.size()-1;
  int ans = -1;
  while(s<=e){
  int mid = s +(e-s)/2;
  int element = v[mid];

  if(element == target){
    ans = mid;
    s = mid+1;
  }else if(target>element){
    //*riht search
    s = mid+1;
  }else{
    //*left me search
    e = mid-1;
  }
  }
  return ans;
}

int main(){

  //! Binary Search
  // int arr[] = {2, 4, 6, 8, 10, 12, 16};
  // int target = 2;
  // int size = 7;

  // int indexOfTaregt = binarySearch(arr, size, target);
  // if (indexOfTaregt == -1)
  // {
  //   printf("Element is not present");
  // }
  // else
  // {
  //   cout << "Element is present on Index: " << indexOfTaregt << endl;
  // }

  //!Binary Search Inbuild Algo in C++

  // vector <int> v{1,2,3,4,5,6,7}; 
   // if(binary_search(v.begin(), v.end(), 3)){
  //   cout<<"Found"<<endl;
  // }else{
  //   cout<<"Not found";
  // }

  // int brr[] = {1,2,3,4,5,6,7}; 
  // int size = 7;

  // if(binary_search(brr, brr+size, 30)){
  //   cout<<"Found"<<endl;
  // }else{
  //   cout<<"Not found";
  // }


  //! First and Last occurance of given element
  vector <int> v{1,3,3,4,4,4,4,6,7};
  int target = 4;

  //! First occurance of given element
  int indexOfFirstOcc = firstOcurrance(v, target);
  cout<<"First Occurance is at "<<indexOfFirstOcc<<endl;
  //! Last occurance of given element
  int indexOfLastOcc = lastOcurrance(v, target);
  cout<<"Last Ocuurance is at "<<indexOfLastOcc<<endl;

  //!Inbuild first and last occurance
  auto first = lower_bound(v.begin(), v.end(), target);
  cout<<"First is "<<first - v.begin()<<endl;

  auto last = upper_bound(v.begin(), v.end(), target);
  cout<<"Last is "<<last - v.begin()-1<<endl;

  cout<<"Total Occurance is "<<indexOfLastOcc-indexOfFirstOcc+1<<endl;
  return 0;
}