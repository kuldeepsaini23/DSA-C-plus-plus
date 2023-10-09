#include<iostream>
using namespace std;
 
 
int main(){
  char ch = 'a';
  char * ptr = &ch;
  ch++;
  cout<<*ptr<<endl;
      
 return 0;
}