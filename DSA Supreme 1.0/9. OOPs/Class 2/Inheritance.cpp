#include <iostream>
using namespace std;

//!Multi-level
// class Fruit
// {
// public:
//   string name;
// };

// class Mango: public Fruit{
//   public:
//   int weight;
// };

// class Alphanso: public Mango{
//   public:
//   int sugarlevel;
// };

//!Multiple
// class A{
//   public:
//     int physics;
//     int chemistry;

//     A(){
//       chemistry = 10;
//     }
// };

// class B{
//   public:
//     int chemistry;
//      B(){
//       chemistry = 420;
//     }
// };

// class C: public A, public B{
//   public:
//     int maths;
// };

//! Heirarhical
class Car{
  public:
  int age;
  int weight;
  string name;

   void speedUp(){
    cout<<"Speeding up"<<endl;
  }

  void breakMarro(){
    cout<<" Break maroo"<<endl;
  }
};

class Scorpio: public Car{
  
};

class Fortuner: public Car{
  
};

int main()
{
//!Multi-level
  // Alphanso a;
  // a.name = "Kuldeep";
  // cout<<a.name;
  
  //!Multiple
  // C obj;
  // cout<<obj.physics<<" "<<obj.A::chemistry<<obj.B::chemistry<<endl;

  //! Heirarhical
  Scorpio s11;
  s11.speedUp();

  Fortuner f11;
  f11.speedUp();

  return 0;
}