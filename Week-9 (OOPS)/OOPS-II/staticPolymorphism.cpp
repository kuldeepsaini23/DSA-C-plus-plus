#include<iostream>
using namespace std;

//! Static Polmorphism / Compile time polymorphism / Overlaoding
//* 1. Function Overlaoding
// int add(int a, int b){
//   return a + b;
// }

// double add(double a, double b){
//   return a+b;
// }

// int add(int a, int b, int c){
//   return a+b+c;
// }

// double add(float a, int b){
//   return a+b;
// }
 
//* 2. Function Overlaoding
class Vector{
private:
  int x,y;

public:
  // Vector(int x, int y){
  //   this->x = x;
  //   this->y = y;
  // }  

  //* Initalized list
  Vector(int x, int y) : x(x), y(y){}

  //! Operator Overlaoding
  void operator+(const Vector &src){
    //this would point to v1
    //src will be v2

    this->x = this->x + src.x;
    this->y = this->y + src.y;
  }

    void operator++(){
    //this would point to v1
    //src will be v2

    this->x ++;
    this->y ++;
  }

  void display(){
    cout << "x: "<<x <<" "
    << "y: "<<y <<endl;
  }

};


int main(){
  // cout<<add(1,2)<<endl;
  // cout<<add(1.1,2.0)<<endl;
  // cout<<add(1.0,2.0,3)<<endl;
  // cout<<add(1.0f,2)<<endl;
      
  //* operator Overlaoding    
  Vector v1(2,3);
  Vector v2(4,5);

  v1 + v2;
  // TODO: Addition answer should be stored in v1
  v1.display();

  ++v1;
  v1.display();
 return 0;
}