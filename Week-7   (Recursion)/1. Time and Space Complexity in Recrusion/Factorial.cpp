#include<iostream>
using namespace std;
 
//* Factorial
int fact(int n){
  if(n==1)
    return 1;

  return n*fact(n-1);
}


int main(){
  int n = 5;
  cout<<fact(n);
      
 return 0;
}