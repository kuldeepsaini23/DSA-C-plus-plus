#include<iostream>
using namespace std;

//! Static Keyword

class abc
{
  public:
  static int x,y;
  int z;

  // void print() const{
  //   this pointer is passed
  //   cout<< x << " " << y << endl;
  // }

  static void print() {
    // this pointer is passed
    cout<< x << " " << y << endl;
    // cout<<z<<endl;//! Error cannot access non static data memeber
    //* macro to print function name
    cout<<"The function name is: "<< (__FUNCTION__) <<endl; 
  }
};


//* have to Initialize static data members
int abc ::x; 
int abc ::y;

int main(){
  // abc obj1 = {1,2};
  // abc obj2 = {4,5};
  // obj1.print();
  // obj2.print();

  //* With static
  abc obj1;
  obj1.x = 1;
  obj1.y = 2;
  obj1.print();
  abc obj2;
  obj2.x = 10;
  obj2.y = 20;
  obj1.print();
  obj2.print();

  //* When Method is static
  abc::print();
  
      
 return 0;
}