#include <iostream>
using namespace std;

//! Function Overloading
//  class Maths{
//   public:
//   int sum(int a, int b){
//     return a+b;
//   }

//    int sum(int a, int b, int c){
//     return a+b+c;
//   }
//  };

//! Operator Overloading
class Param
{
public:
  int val;

  void operator+(Param& obj2){
    int value1 = this->val;
    int value2 = obj2.val;
    cout<< (value2-value1)<<endl;
  }
};

int main()
{

  //! Function Overloading
  //  Maths m1;
  //  cout<<m1.sum(1,2)<<endl;
  //  cout<<m1.sum(1,2,3);

  //! Operator Overloading

  Param obj1, obj2;

  obj1.val = 2;
  obj2.val = 7;
  //*This should print the difference between them
  obj1+obj2;
  return 0;
}