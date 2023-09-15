#include<iostream>
#include<vector>
using namespace std;
 
int findPivotElemnt(vector<int>& v){
  int s =0;
  int e = v.size()-1;
  int mid;
  while(s<e){
    mid = s+(e-s)/2;

    //*if wantt pivot element as min element of array
    // if(v[mid]>=v[s]){
    //   s=mid+1;
    // }else{
    //   e = mid;
    // }
  /*********************or********************/
  // if (v[mid] <= v[e]) {
  //     e = mid;
  //   } else {
  //     s = mid + 1;
  //   }

    if (v[mid] > v[e]) {
      e = mid;
    } else {
      s = mid + 1;
    }
    
  }
  return s;
}

 
int main(){
 //* Find Pivot Element
//  vector<int> v{7,9,1,2,3};
    vector<int> v{3,8,10,17,1};
  cout<<"The Pivot Elemnt is at Index: "<<findPivotElemnt(v);

 return 0;
}