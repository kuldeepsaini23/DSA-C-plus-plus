#include<iostream>
using namespace std;
 
//* Assume memory address of variable 'a' is :200 and a double variable is of size 8 bytes, what will be the output
int main(){
  double a = 10.54;
  double *d = &a;
  d = d+1;
  cout<<a<<endl;
      
 return 0;
}