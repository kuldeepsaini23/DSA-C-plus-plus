#include<iostream>
using namespace std;

//! Can Constructor be amde Private
class Box{
  int width;
  //Private Constructor
  Box(int _w):width(_w){};

public:
//* Initialisation list
  // Box(int _w):width(_w){};


  int getWidth()const{
    return width;
  }

  void setWidth(int _val){
    width = _val;
  }

  friend class BoxFactory;

};

class BoxFactory{
  int count;

public:
  Box getABox(int _w){
    ++count;
    return Box(_w);
  }
};
 
int main(){
  // Box b(5);
  // Box b;
  // cout<< b.getW
  
  //* Aceesing Private constrructor through another class
  BoxFactory bfact;
  Box b = bfact.getABox(5);
  cout<< b.getWidth() << endl;
    
 return 0;
}
