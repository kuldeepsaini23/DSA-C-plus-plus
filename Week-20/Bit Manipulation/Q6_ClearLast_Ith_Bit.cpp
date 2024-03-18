#include<iostream>
using namespace std;
 
void clearLastIthBit(int n, int i){
  int mask = (-1 << i);
  n = n & mask;
  cout << "Updated Number: " << n;
}

 
int main(){
 int n = 15;
 int i = 2;
 clearLastIthBit(n,i);
 return 0;
}