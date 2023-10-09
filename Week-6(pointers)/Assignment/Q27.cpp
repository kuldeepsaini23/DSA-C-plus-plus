#include<iostream>
using namespace std;
 
 
int main(){
  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p<<" "<<**q<<" "<<***r;
      
 return 0;
}