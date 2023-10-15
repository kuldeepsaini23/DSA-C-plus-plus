#include <iostream>
using namespace std;

int main()
{
  // int a = 10;
  // int *pa = &a;
  // int &ra;
  // ra = a;
  // cout<<ra;

  int a[] = {10,20,30,40,50};
  // int *p[] = {a,a+3,a+4, a+1,a+2};
  // int **ptr = p;
  // ptr++;
  // cout<<**ptr<<endl;
  // cout<<*a<<endl;
  // cout<<ptr-p;

  cout<<(&a +1)<<endl;
  cout<<(&a)<<endl;
  cout<<*(&a+1)-*(&a)<<endl;
  
  return 0;
}
