#include<iostream>
using namespace std;
 
  //! Divide 2 numbers using Binary Search

  int solve(int dividend, int divisor){
  long ans = 0;
    
    
    long s = 0;
    long e = abs(dividend);
    
    while(s<=e){
      long mid = s + (e-s)/2;
      
      if(dividend ==INT16_MIN && divisor==-1){
        return INT16_MAX;
        break;
      }
     
      //* Perfect Solution
      if(abs(mid*divisor )== abs(dividend)){
        ans = abs(mid);
        break;
      }

      //* Non Perfect Solution
      if(abs(mid*divisor) > abs(dividend)){
        //* Left Search
        e = mid-1;
      }else{
        //* Store answer
        ans = abs(mid);
        //*Right Searcg
        s = mid+1;
      }
    }

    if((dividend<0 && divisor<0) || (divisor>0 && dividend>0)){
       return ans;
    }else{
      return -ans;
    }
  }


int main(){
 int dividend = 21;
 int divisor = 1;

 int ans = solve(dividend, divisor);

  cout<<"Ans is "<<ans<<endl;
 
  //! find out decima and undefined
 return 0;
}