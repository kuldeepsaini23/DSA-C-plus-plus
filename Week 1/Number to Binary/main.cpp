#include <iostream>
#include<cmath>
using namespace std;

int decimalToBinaryMethod1(int n)
{
  // Division method
  int binaryno = 0;
  int i =0;
  while (n > 0)
  {
    int bit = n % 2;
    binaryno = bit*pow(10,i++) + binaryno;
    n = n / 2;
  }

  return binaryno;
}

int decimalToBinaryMethod2(int n)
{
  // Division method
  int binaryno = 0;
  int i =0;
  while (n > 0)
  {
    int bit = (n & 1);
    binaryno = bit*pow(10,i++) + binaryno;
    n = n >> 1;
  }

  return binaryno;
}


int binaryToDecimal(int n){
  int decimal = 0;
  int i = 0;
  while(n){
    int bit = n%10;
    decimal = bit*pow(2,i++) + decimal;
    n = n/10;
  }

  return decimal;
}


int main()
{
  int n;
  cin >> n;
  // int binary = decimalToBinaryMethod1(n);
  // int binary = decimalToBinaryMethod2(n);
  // cout<<binary<<endl;

  int decimal = binaryToDecimal(n);
  cout<<decimal<<endl;

  return 0;
}