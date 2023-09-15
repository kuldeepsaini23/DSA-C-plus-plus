#include <iostream>
using namespace std;

// class Animal
// {
// private:
//   int age;
//   int weight;

// public:
//   void eat()
//   {
//     cout << "Eating" << endl;
//   }

//   int getAge(){
//     return age;
//   }

//   void setAge(int age){
//     this->age = age;
//   }
// };

// class Dog: public Animal{

// };

class Car{
  public:
  string name;
  int weight;
  int age;

  void speedUp(){
    cout<<"Speeding up"<<endl;
  }

  void breakMarro(){
    cout<<" Break maroo"<<endl;
  }
};

class Scorpio: public Car{
  
};

int main()
{

  Scorpio babbarWali;
  babbarWali.speedUp();

  return 0;
}
