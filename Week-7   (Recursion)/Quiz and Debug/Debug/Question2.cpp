#include<iostream>
using namespace std;

//* Debug the code.
//n --> Power
// x--> number
double myPow(double x, int n) {

  int p = abs(n);
  double ans = 1.0;
  while(p>=1){
    if(p%2==1){//*Added this
      ans*=x;
    }
     p /= 2 ;
     x *= x;
  }
  return n<0 ? 1/ans : ans;    
}
 
int main(){
  double x = 2;
  int n = 5;
  cout<<myPow(x,n);
      
 return 0;
}