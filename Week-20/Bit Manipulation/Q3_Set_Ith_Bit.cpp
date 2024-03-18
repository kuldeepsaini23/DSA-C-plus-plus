#include<iostream>
using namespace std;
 
void setIthBit(int n, int i){
  int mask =  (1 << i);
  int ans = n | mask;
  cout << "Updated Number: " << ans;
}

 
int main(){
 int n = 10;
 int i = 2;
 setIthBit(n,i);
      
 return 0;
}