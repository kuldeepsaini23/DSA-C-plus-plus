#include<iostream>
using namespace std;

//* Debug the code.
bool isPowerOfFour(int n) {
  if(n<=0){//*Change 1 to 0
    return false;
  }
  if(n==1){//*Add this
     return true;
  }
  if(n%4!=0){
     return false;
  }
    
    return isPowerOfFour(n/4);
  } 

 
int main(){
  int n = 16;
  cout<<isPowerOfFour(n);
      
 return 0;
}