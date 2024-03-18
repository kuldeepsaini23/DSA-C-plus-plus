#include<iostream>
using namespace std;
 
void getIthBit(int n, int i){
  int mask (1 << i);
  int ans = n & mask;

  if(ans){
    cout << "Bit--> 1" <<endl;
  }
  else{
    cout << "Bit--> 0" <<endl;
  }
}

 
int main(){
 int n = 10;
 int i = 0;
 getIthBit(n,i);
      
 return 0;
}