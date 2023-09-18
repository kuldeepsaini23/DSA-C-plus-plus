#include<iostream>
#include<vector>
using namespace std;
 
bool linearSearch(vector<int> v, int target){
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    if(v[i]==target){
      return true;
    }
  }
  return false;
}

//* BINARY SEARCH
int binarySearch(int arr[],int n, int target){
  int start = 0;
  int end = n-1;
  //there is flow in mid-->Hw(Page no-209 Notes)
  int mid = (start+end)/2;

  while(start<=end){
    if(arr[mid]==target){
      return mid;
    }else if(arr[mid]<target){
      start = mid+1;
    }else{
      end = mid-1;
    }

    mid = (start+end)/2;
  }
  return -1;
}

//* 1. Find first occurance of a element in sorted array
int findFirstOccurance(int arr[],int n, int target){
  int start = 0;
  int end = n-1;
  //there is flow in mid-->Hw(Page no-209 Notes)
  // int mid = (start+end)/2;
  //---> Use this
  int mid = start + (end - start)/2;
  int occurance = -1;
  while(start<=end){
    if(arr[mid]==target){
      occurance = mid;
      end = mid-1;
    }else if(arr[mid]<target){
      start = mid+1;
    }else{
      end = mid-1;
    }

    mid = (start+end)/2;
  }
  return occurance;
}

//* 1.2 Find last occurance of a element in sorted array
int findLastOccurance(int arr[],int n, int target){
  int start = 0;
  int end = n-1;
  //there is flow in mid-->Hw(Page no-209 Notes)
  // int mid = (start+end)/2;
  //---> Use this
  int mid = start + (end - start)/2;
  int occurance = -1;
  while(start<=end){
    if(arr[mid]==target){
      occurance = mid;
      start = mid+1;
    }else if(arr[mid]<target){
      start = mid+1;
    }else{
      end = mid-1;
    }

    mid = (start+end)/2;
  }
  return occurance;
}

//* 2. Total Number of occurances
int findTotalOccurance(int arr[], int n, int target){
  int firstOcc = findFirstOccurance(arr,n,target);
  cout<<"The First Occurances of "<<target<<" is at index: "<<firstOcc<<endl;
  int lastOcc = findLastOccurance(arr,n,target);
  cout<<"The Last Occurances of "<<target<<" is at index: "<<lastOcc<<endl;
  int total = lastOcc - firstOcc + 1;
  return total;
}

//* 3. Find missing element in a sorted array
int findMissingElement(int arr[], int n){
  int s =0;
  int e = n-1;
  int ans = -1;
  int mid = s+(e-s)/2;
  while(s<=e){
    int diff = arr[mid] - mid;

    if(diff == 1){
      s = mid+1;
    }else{
      ans = mid;
      e = mid-1;
    }

    mid = s+(e-s)/2;
  }

  //TODO: Hw--> How can we remove this if condition
  if(mid == 0){
    return n+1;
  }
  return mid + 1;
}


//* 4. Peak Index in an Mountain Array
int peakElementIndex(vector<int>& arr){
  int s = 0;
  int e = arr.size()-1;

  while(s<e){
    int mid = s+(e-s)/2;
    if(arr[mid]>arr[mid+1]){
      //Left search
      e = mid;
    }else{
      //Right search
      s = mid+1;
    }
  }

  return s;
  //or can return e also because you will stand on a single element at last
}


 
int main(){
 //! Searching

 //* Linear Search
//  vector<int>v{1,2,3,4,5};
//  int target = 6;
//  int flag = linearSearch(v, target);
//  if(flag){
//   cout<<"Element Found"<<endl;
//  }else{
//   cout<<"Element Not Found"<<endl;
//  }

 //* BINARY SEARCH--> only on sorted array(can be ascending or descending)
  // int arr[5] = {1,2,3,4,5};
  // int size = 5;
  // int target = 3;
  // int ansIndex = binarySearch(arr, size, target);
  // if(ansIndex == -1){
  //   cout<<"Target Not found";
  // }else{
  //   cout<<"Index of Target element "<<target<<" is: "<<ansIndex;
  // }
  
  //!Questions

  //* 1. Find first occurance of a element in sorted array
  // int arr[5] = {1,2,2,3,4};
  // int size = 5;
  // int target = 2;
    //* First Occurance
    // int ansIndex = findFirstOccurance(arr, size, target);
    //*LastOccurance
    // int ansIndex = findLastOccurance(arr, size, target);
    // if(ansIndex == -1){
    //   cout<<"Target Not found";
    // }else{
    //   cout<<"Index of Last Occurance of Target element "<<target<<" is: "<<ansIndex;
    // }


  //* 2. Total Number of occurances 
  // int arr[6] = {1,2,2,2,3,4};
  // int size = 6;
  // int target = 2;
  // int total = findTotalOccurance(arr, size, target);
  // if(total == -1){
  //   cout<<"Target Not found";
  // }else{
  //   cout<<"Total Ocuurances of "<<target<<" is: "<<total;
  // }


  //* 3. Find missing element in a sorted array
  // int arr[8] = {1,2,3,4,5,6,7,8};
  // int size = 8;

  // int missingElement = findMissingElement(arr, size);
  // cout<<"Missing Element: "<<missingElement<<endl;

  //* 4. Peak Index in an Mountain Array
  vector<int> v{10,20,50,40,30};
  cout<<"Index of Peak Element is: "<<peakElementIndex(v);




      
 return 0;
}