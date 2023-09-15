#include <iostream>
#include "2.h"
using namespace std;

void fun()
{
  cout << "Fun hogya" << endl;
}

int main()
{
  //! This will positve number only
  // unsigned int a =-10;
  // cout<<a;

  //Static int a = 10;

  // bool a = 1;
  // cout<<(~a); --> -1
  // bool b = ~a;
  // cout<<b; -->1
  fun();
  funFrom2();
  return 0;
}