#include<iostream>
using namespace std;

//! Multiple Inheritance

class Person{
  public:
  void walk(){
    cout << "Walking..." << endl;
  }
};

class Teacher : virtual public Person{
public:
  void teach(){
    cout<< "Teaching" << endl;
  }
};


class Researcher : virtual public Person{
public:  
  void research(){
    cout<< "Researching...." << endl;
  }
};

//* mutliple Inhertitance
class Professor: public Teacher, public Researcher{
public:
  void bore(){
    cout << "Boring......" << endl;
  }
};


 
int main(){
  Professor p;
  //! Diamond Problem
  // p.walk();

  //* Solution 1. Scope Resolution
  // p.Teacher::walk();
  // p.Researcher::walk();

  //* Solution 2. Inherit person class using virtual 
  p.walk();


 return 0;
}