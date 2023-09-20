#include<iostream>
using namespace std;



//* 1. Divide Two numbers using Binary Search 
int divide(int dividend, int divisor){
  int s=0;
  int e=dividend;
  int ans =-1;
  int mid = s +(e-s)/2;

  while(s<=e){
    if(mid* divisor == dividend){
      return mid;
    }
    else if(mid*divisor < dividend){
      ans = mid;
      s = mid+1;
    }
    else{
      e = mid-1;
    }
    mid = s +(e-s)/2;
  }
  return ans;
}

//* 2. Binary Search on nearly Sorted Array
int searchNearlySorted(int arr[],int size, int target){
  int s=0;
  int e=size-1;
  int mid = s +(e-s)/2;
  while(s<=e){
    if(mid-1>=0&&arr[mid-1]==target){
      return mid-1;
    }
    if(mid+1<=size-1&&arr[mid]==target){
      return mid;
    }
    if(arr[mid+1]==target){
      return mid+1;
    }

    if(target>arr[mid]){
      //right
      s = mid+2;
    }else{
      //left
      e = mid-2;
    }
    mid = s+(e-s)/2;
  }
  return -1;
}

int findOddOccuringElement(int arr[], int size){
  int s=0;
  int e = size-1;

  while(s<=e){
    int mid = s+(e-s)/2;
    if(s==e) return s;

    if(mid&1){
      //mid&1 is true--> odd number
      if(mid-1>=0 && arr[mid]==arr[mid-1]){
        // right me jao
        s=mid+1;
      }else{
        // left me jao
        e = mid-1;
      }
    }else{//Even
      if(mid+1<=size-1 && arr[mid]==arr[mid+1]){
        //right me jao
        s = mid+2;
      }else{
        //Ya toh right part me khda ya toh answer ke upar hu kyuki e=mid -1 pe answer lost ho skta hh
        e=mid;
      }
    }
  }
  return -1;
}

 
int main(){
 //!Binary Search Questions

 //* 1. Divide Two numbers using Binary Search
  // int dividend = 28;
  // int divisor = -7;
  // int ans = divide(abs(dividend),abs(divisor));
  // if(divisor<0 && dividend>0 || divisor>0 && dividend<0){
  //   ans = -ans;
  // }
  // cout<<ans<<endl;

  //* 2. Binary Search on nearly Sorted Array
  // int arr[] = {20,10,30,50,40,70,60};
  // int n=7;

  // int target = 60;

  // int targetIndex = searchNearlySorted(arr,n,target);
  // if(targetIndex==-1){
  //   cout<<"Element Not Found"<<endl;
  // }else{
  //   cout<<"Element Found at index "<<targetIndex<<endl;
  // }

  //* 3. Find the odd occuring element
  int arr[] = {10,10,2,2,3,3,5,5,6,6,7,7,10};
  int size = sizeof(arr)/sizeof(int);

  int ans = findOddOccuringElement(arr,size);
  cout<<"Index is "<<ans<<endl;
  if(ans==-1){
    cout<<"Element Not Found"<<endl;
  }else{
    cout<<"Answer Found and Element is "<<arr[ans]<<endl;
  }

  return 0;
}