#include<iostream>
using namespace std;
 
 
int main(){
  int a[] = {1,2,3,4};
  int *p = a++; //!--> Error
  cout<< *p <<endl;
      
 return 0;
}