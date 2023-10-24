#include<iostream>
using namespace std;
 
//* Debug the code. Power(x^n) 
int power(int x, int n){
    if(n == 0) return 1;
    if(x == 0) return 0;
    int temp = power(x, n/2);
    if(n % 2==0){//* Add ==0
        return temp*temp;
    } else{
        return temp*temp*x;
    }
}

int main(){
    int n = 4;
    int x = 2;
    cout<<power(x,n);
      
 return 0;
}