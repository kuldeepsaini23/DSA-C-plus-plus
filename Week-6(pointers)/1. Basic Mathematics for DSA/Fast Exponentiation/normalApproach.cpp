#include<iostream>
using namespace std;
 //* Fast Exponentiation
int slowExponentiation(int a, int b){
  int ans = 1;
  for (int i = 0; i < b; i++)
  {
    /* code */
    ans = ans*a;
  }
  return ans;
}


int main(){
 int n = 2;
 int power = 5;
 cout<<slowExponentiation(n,power);
      
 return 0;
}