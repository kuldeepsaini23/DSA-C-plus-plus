#include<iostream>
using namespace std;

//* Shallow V/s Deep Copy
class abc{
  public:
  int x;
  int *y;

  abc(int _x, int _y) : x(_x), y(new int(_y)){}

  //* Default Dumb copy constructor: It does Shallow Copy
  abc(const abc &obj){
    x = obj.x;
    y = obj.y;
  }

  //* Smart Deep Copy Constructor
  // abc(const abc &obj){
  //   x = obj.x;
  //   y = new int(*obj.y);
  // }

  void print() const{
    printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n", x, y, *y);
  }

  
  ~abc(){
    delete y;
  }
};
 
int main(){
  // abc a(1,2);
  // cout<<"Printing a\n";
  // a.print();

  // abc b =a;// Call hota hh copy constructor(By default )
  // cout<<"Printing b\n";
  // b.print();

  // *b.y = 20;
  // cout<<"Printing b\n";
  // b.print();

  // cout<<"Printing a\n";
  // a.print();

  abc *a = new abc(1,2);
  abc b = *a;
  delete a;
  b.print();
      
 return 0;
}