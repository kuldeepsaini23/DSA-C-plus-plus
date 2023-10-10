#include<iostream>
using namespace std;

//* Fibonacci
int fib(int n){
  if(n==0 || n==1){
    return n;
  }

  return fib(n-1) + fib(n-2);
}
 
int main(){
  int n = 5;
  cout<<fib(n);
      
 return 0;
}