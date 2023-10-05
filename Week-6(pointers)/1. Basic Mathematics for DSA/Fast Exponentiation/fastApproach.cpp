#include<iostream>
using namespace std;
 //* Fast Exponentiation
int slowExponentiation(int a, int b){
  int ans = 1;
  while(b>0){
    if(b&1){
      ans = ans*a;
    }
    a = a*a;
    b = b>>1;//half the value
  }
  return ans;
}


int main(){
 int n = 2;
 int power = 5;
 cout<<slowExponentiation(n,power);
      
 return 0;
}