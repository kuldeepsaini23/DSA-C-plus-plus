#include<iostream>
using namespace std;


//* Debug the code. Find square root of x.
int mySqrt(int x) {

  if (x == 0)
      return x;
  int first = 1, last = x;
  while (first <= last) {
      int mid = first + (last - first) / 2;
      if (mid  == x / mid)
          return mid;
      else if (mid > x / mid) {
          last = mid-1;//* Changed this
      }
      else {
          first = mid+1;//* changed this
      }
  }
  return first;
}
 
int main(){
  cout<<mySqrt(10);
      
 return 0;
}