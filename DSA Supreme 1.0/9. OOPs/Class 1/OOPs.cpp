#include <iostream>
#include<string.h>
using namespace std;

class Animal
{
  //*state or Property
  public: 
   int age;
   int weight;
   string name;

  //*1. Default Constructor
  Animal(){
    this->age = 0;
    this->weight = 0;
    this->name = "";
    cout<<"Constructor Called"<<endl;
  }

  //*2. Parameterized Constructor
  // Animal(int age){
  //   this->age = age;
  
  //   cout<<"Parameterized 1 Constructor Called"<<endl;
  // }

  //*Parameterized 2 Constructor
  // Animal(int age, int weight){
  //   this->age = age;
  //   this->weight = weight;
  //   cout<<"Parameterized 2 Constructor Called"<<endl;
  // }

  // //*Parameterized 3 Constructor
  // Animal(int age, int weight, string name){
  //   this->age = age;
  //   this->weight = weight;
  //   this->name = name;
  //   cout<<"Parameterized 3 Constructor Called"<<endl;
  // }

  //* 3. Copy COnstructor
  Animal(Animal &obj){
    this->age = obj.age;
    this->weight = obj.weight;
    this->name = obj.name;
    cout<<"I am inside a Copy Cnstructor"<<endl;
  }

  //*behavior or functions-C++ / methods- java
  void eat(){
    cout<<"He is Eating"<<endl;
  }

  void sleep(){
    cout<<"He is Sleeping"<<endl;
  }

  int getAge(){
    return age;
  }

  void setAge(int age){
    this->age = age;
  }

  void print(){
    cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl;
  }

  ~Animal(){
    cout<<"I am inside Destructor"<<endl;
  }

};

int main()
{
  //!Object creation

  //*static memory allocation
  // Animal ramesh;                       
  // ramesh.age = 12;
  // ramesh.name = "Lion";
  // cout<<"Age of Ramesh is: "<< ramesh.age<<endl;;
  // cout<<"Name of Ramesh is: "<<ramesh.name<<endl;

  // ramesh.eat();
  // ramesh.sleep();

  // ramesh.setAge(20);
  // cout<<ramesh.getAge();

  //*Dynamic memory allocation
  // Animal* suresh = new Animal;

  // (*suresh).age = 15;
  // (*suresh).name = "billi";

   //alternate
  // suresh->age = 17;
  // suresh->name = "Kutta";
  // suresh->eat();
  // suresh->sleep();

  // Animal a(10);
  // Animal* b = new Animal(100,120);
  // Animal c(10,20,"lion");

  //*object copy
  // Animal d = a;
  // Animal animal1(*b);

  //!Pending Deep and Shallow copy
  // Animal a;
  // a.weight = 20;
  // a.setAge(12);
  // a.name = "babbar";

  // Animal b=a;

  // cout<<"A -> ";
  // a.print();

  // cout<<"B -> ";
  // b.print();

  // a.name[0] = 'G';

  // cout<<"A -> ";
  // a.print();

  // cout<<"B -> ";
  // b.print();


  Animal a;
  a.age =5;

  Animal* b = new Animal();
  b->age =12;

  //*manually call
  delete b ;


  return 0;
}