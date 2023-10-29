#include<iostream>
#include<vector>
#include<string>
using namespace std;

//! Inheritance
class Bird{

public:  
  int age, weight;
  int nol;//No of legs
  string color;

  void eat(){
    cout<< "Bird is Eating\n";
  }

  void fly(){
    cout << "Bird is Flying\n";
  }
};

//* Child Class
class Sparrow: public Bird{
  public:
  Sparrow(int age, int weight, string color, int nol){
    this->age = age;
    this->weight = weight;
    this->color = color;
    this->nol = nol;
  }

  void grassing(){
    cout << "Sparrow is grassing\n";
  }
};

class Peigon: public Bird{
  public:
  void guttering(){
    cout << "Peigon is guttering\n";
  }
};

class Parrot: private Bird{
  public:

  int getAge(){
    return this->age;
  }

  void setAge(int age){
    this->age = age;
  }

  void speaks(){
    cout << "Parrot is Speaks\n";
  }
};

 
int main(){
  //* Sparrow object
  Sparrow s(1, 1, "Brown", 2);
  cout<< s.color << endl;
  s.eat();
  s.grassing();
  Peigon p;
  p.guttering();
  p.eat();

  Parrot po;
  // po.age;//! Privately inherit kiya hh isliye inaccessible
  //* but I can acces the age with getter getAge()
  po.setAge(4);
  cout<< po.getAge()<<endl;    
 return 0;
}