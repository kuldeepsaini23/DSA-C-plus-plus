#include<iostream>
using namespace std;
 
 
int main(){

  //! Implicit Typecasting
  //* 1. Int to float
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1+num2;
    // cout<<result<<endl;
      
  //* 2. char to int
    // char ch = 'A';
    // int a = ch+1;
    // cout<<a<<endl;

  //* 3. int to char
  //   int a = 97;
  //   char ch = a;
  //   cout<<ch<<endl;

  //! Explicit Typecasting
    //* 1. double to int
      double pi = 3.14159265;
      int intPi = (int)pi;
      cout<<intPi<<endl;

    //* 2. Float to char
      float floatingNumber = 6.5;
      char charValue = (char)floatingNumber;
      cout<<charValue<<endl;

    //* 3. int to float
      int a = 10;
      int b = 3.0;
      float c = a/((float)b);
      cout<<c<<endl;



 return 0;
}