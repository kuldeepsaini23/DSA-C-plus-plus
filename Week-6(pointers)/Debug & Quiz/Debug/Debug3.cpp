#include<iostream>
using namespace std;
 
//*Debug the code. (isPrime)

bool isPrime(int n)
{
    if (n <=1) //*Changed < to <= 
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i==0) //*Added ==0
            return false;
 
    return true;
}


int main(){
 
      
 return 0;
}