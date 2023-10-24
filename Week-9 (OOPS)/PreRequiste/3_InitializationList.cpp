#include<iostream>
using namespace std;

//! Initialization list
#include<iostream>
using namespace std;

//* Const Keyword


class abc{
  //! Only use mutable on debuging purpose vrna suing Bad pratice
  mutable int x;
  int *y;
  const int z;

public:


  //! Old Method to write constructor  
  //* Cannot assign const z in this (cannot Initialize)
  // abc(int _x, int _y, int _z=0){
  //   x = _x;
  //   y = new int(_y);
  //   z = _z;
  // }

  //! Fancy or New Method -> Initalize List
  //* Can assign const z in this(cannot reassign only initlialize)
  abc(int _x, int _y, int _z=0): x(_x), y(new int(_y)), z(_z){
    cout<< "in init list" << endl;
    *y = *y + 10;
  }

  int getX() const
  {
    // x = 10; //* X is mutable that why changing inside const method
    return x;
  }

  int getZ() const 
  {
    return z;
  }

  void setX(int _val){
    x = _val;
  }

  int getY() const
  {
 
    return *y;
  }

};

void printABC(const abc &a){
  //* getX , getY and getZ should be const 
  cout<< a.getX() <<" "<<a.getY()<<" " << a.getZ()<<endl;
}

int main(){
  // abc a(1,2);
  abc a(1,2,3);
  printABC(a);
 

return 0;
}

 
