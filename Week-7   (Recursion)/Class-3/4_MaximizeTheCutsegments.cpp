#include<iostream>
#include<limits.h>
using namespace std;

//* Maximize the cut segments
int maximizeTheCuts(int n, int x, int y, int z)
{
    //Base Case
    if(n==0){
        return 0;
    }
    
    if(n < 0){
        return INT_MIN;
    }
    
    //maine x len ko 1 segement cut krliya hh baki recrusion dekhlegaa
    int option1 = 1 + maximizeTheCuts(n-x,x,y,z);
    
    //maine y len ko 1 segement cut krliya hh baki recrusion dekhlegaa
    int option2 = 1+ maximizeTheCuts(n-y,x,y,z);
    
    //maine z len ko 1 segement cut krliya hh baki recrusion dekhlegaa
    int option3 = 1+ maximizeTheCuts(n-z,x,y,z);
    
    int finalAns = max(option1, max(option2,option3));
    return finalAns;
}
 
int main(){
  //* Maximize the cut segments
  int x,y,n,z;
  n = 4;
  x = 2;
  y = z = 1;
  cout<<maximizeTheCuts(n,x,y,z);

      
 return 0;
}