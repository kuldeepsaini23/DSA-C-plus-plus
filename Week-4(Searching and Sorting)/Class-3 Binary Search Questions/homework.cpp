#include<iostream>
#include <typeinfo>
using namespace std;

//* Divided using Binary Search
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
 
 
int main(){
  int dividend = 29;
  int divisor = 7;
  int ans = divide(abs(dividend),abs(divisor));
  cout<<ans<<endl;
  cout<<"Enter your precision:";
  int precision; cin>>precision;
  double step=0.1;
  double finalAns = ans;
  cout<<typeid(finalAns).name()<<endl;
  for(int i=0;i<precision;i++){
    for(double j = finalAns; j*abs(divisor) <= abs(dividend); j+=step){
      finalAns = j;
    }
    step/=10;
  }

  if(divisor<0 && dividend>0 || divisor>0 && dividend<0){
    finalAns = -finalAns;
  }
  cout<<"The final answer is "<<finalAns<<endl;
 return 0;
}