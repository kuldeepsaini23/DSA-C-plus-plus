#include<iostream>
using namespace std;
 
void clearBitsInRange(int n, int i, int j){
  int a = (-1<<(i+1));
  int b = ~(-1<<j);
  int mask = (a | b);
  n = n & mask;
  cout << "Updated Number: " << n;
}

 
int main(){
 int n = 1023;
 int i = 8;
 int j = 1;
 clearBitsInRange(n,i,j);
 return 0;
}