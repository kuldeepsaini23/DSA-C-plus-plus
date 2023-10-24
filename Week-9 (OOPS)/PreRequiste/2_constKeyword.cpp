#include<iostream>
using namespace std;

//* Const Keyword


class abc{
  //! Only use mutable on debuging purpose vrna suing Bad pratice
  mutable int x;
  int *y;
  int z;

public:
  // abc(){
  //   x = 0;
  //   y = new int(0);
  // }

  // abc(int _x, int _y){
  //   x = _x;
  //   y = new int(_y);
  // }


  
  abc(int _x, int _y, int _z=0){
    x = _x;
    y = new int(_y);
    z = _z;
  }

  int getX() const
  {
    x = 10; // X is mutable that why changing inside const method
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
    // agar hum chate hh ki y reassign na ho toh fetY ko const bna do
    // int f = 20;
    // y = &f;
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

int main2(){
  // const int x = 10;
  //* Can initlize the cosnt but cannot reassign

  //* This the old method which work on old compiler but not on new compiler(To change value of an const)
  // int *p = &x;
  // *p = 5; 
  // cout<< x<< endl;    


  //* 2. Const with pointers
  // const int *a = new int(2);//Data const but pointer non-const
  // The ABove thing can be written as 
  // const int *a = new int(2);
 
  //! Error
  // *a = 5;// Cannot vhange the content of pointer
  // cout<< *a <<endl;
  // delete a;
  // int b = 20;
  // a = &b;
  // cout<< *a << endl;

  //* 2(b).Pointer const, Data -> Non const
  // int *const a = new int(2);
  // cout<< *a <<endl;
  // *a = 20;
  // cout<< *a <<endl;
  // int b = 19;
  // a = &b;-->Error

  //* 3. Const Pointer, const data
  // const int *const a = new int(10);
  // cout<< *a << endl;
  // *a = 50;--> Error
  // int b = 100;
  // a = &b;--> Error


 return 0;
}