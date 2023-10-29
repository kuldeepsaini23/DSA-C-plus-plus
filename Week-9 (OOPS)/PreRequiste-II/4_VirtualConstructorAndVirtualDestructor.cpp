#include<iostream>
using namespace std;

//! Virtual Constructor and Virtual Destructor
class Base{
public:
//! Cnnot make a constructor virtual
  Base()
  {
    cout<< "Base ctor\n";
  }

//* To able to call this child dtor , this class dtor should be virtual
  virtual ~Base(){
    cout<< "Base dtor\n";
  }
};

class Derived : public Base{
  int *a;
public:
  Derived(){
    a = new int(1000);
    cout<< "Derived ctor\n";
  }

  //* To able to call this dtor parent of this class dtor should be virtual
  ~Derived(){
    delete[] a;
    cout<< "Derived dtor\n";
  }
};
 
int main(){
  Base *b = new Derived();
  delete b;
 return 0;
}