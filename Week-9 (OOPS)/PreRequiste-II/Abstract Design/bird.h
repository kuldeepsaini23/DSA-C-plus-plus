#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;

class Bird{
public:
  virtual void eat() = 0;
  virtual void fly() = 0;
  //* Classes that inherits this class has to implement pure virtual function(It is mandatory)
};

class Sparrow : public Bird{
private:
  void eat(){
    cout<< "Sparrow is eating" << endl;
  }

  void fly(){
    cout << "Sparrow is flying" << endl;
  } 
}; 


class Eagle : public Bird{
private:
  void eat(){
    cout<< "Eagle is eating" << endl;
  }

  void fly(){
    cout << "Eagle is flying" << endl;
  } 
}; 


class Pigeon : public Bird{
private:
  void eat(){
    cout<< "Eagle is eating faster" << endl;
  }

  void fly(){
    cout << "Eagle is flying faster" << endl;
  } 
}; 


#endif //BIRD_H
