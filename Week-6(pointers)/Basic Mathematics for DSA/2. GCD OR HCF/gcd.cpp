#include<iostream>
using namespace std;
 

int gcd(int A, int B){
 if(A==0) return B;
 if(B==0) return A;

 while(A>0 && B>0){
  if(A>B){
    A = A-B;
  }else{
    B = B-A;
  }
 }
 return A==0 ? B:A;
} 
 

//* Finding LCM
int lcm(int A, int B){
  // We know LCM*HCF = A*B

  int hcf = gcd(A,B);
  int lcm = A*B/hcf;
  return lcm;
}

int main(){
 int a = 72;
 int b = 24;
 cout<<gcd(a,b)<<endl;
 cout<<lcm(a,b);
 return 0;
}