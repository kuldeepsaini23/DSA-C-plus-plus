#include<iostream>
#include <vector>
using namespace std;
 
 //! Find Odd occuring element
 int solve(vector<int> arr){
  int s=0;
  int e = arr.size()-1;

  while(s<=e){
    int mid = s+(e-s)/2;

    if(s==e){
      //*single element
      return s;
      break;
    }
 //* 2 case mid-> even or mid -> odd
    if(mid%2==0){
      if(arr[mid]==arr[mid+1]){
        s = mid+2;
      }else{
        e= mid;
      }
    }else{
      if(arr[mid] == arr[mid-1]){
        s=mid+1;
      }else{
        e = mid-1;
        
      }
    }
  }

  return -1;
 }

int main(){
 vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
 int ans = solve(arr);
 cout<<"Index is "<<ans<<endl;
 cout<<"Value is "<<arr[ans]<<endl;
      
 return 0;
}