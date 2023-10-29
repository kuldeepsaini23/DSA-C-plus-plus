#include<iostream>
using namespace std;

//! Friend Keyword in C++
class A{
private:
  int x;

public:
  A(int _val) : x(_val){};

  int getX() const{return x;};
  void setX(int _val) {x=_val;};

  //! B is Friend of A (Now all the private members of A is accessible by B also) 
  friend class B;//* Puri class friend hh
  friend void print(const A &);//* Ye function friend bas
};

class B{
public:  
  void print(const A &a){
    // cout<< a.getX() << endl;
    // cout<< a.x <<endl; //* B cannot access private member if B is not friend of a;
  } 
};


int main(){
  A a(5);
  B b;
  b.print(a);
      
 return 0;
}