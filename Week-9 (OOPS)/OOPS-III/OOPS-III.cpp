#include<iostream>
using namespace std;

//! OOPS-III
class Animal{
public:
  virtual void sound(){
    cout<< "Animal making Sound" << endl;
  }

  virtual ~Animal(){
    cout<< "~Animal dtor" << endl;
  }
};

class Dog : public Animal{
public: 
  void sound() override{
    cout<< "Dog Barking" << endl; 
  }

  ~Dog(){
    cout<< "~Dog dtor" << endl;
  }  
};
 

class Cat : public Animal{
public: 
  void sound() override
  {
    cout<< "Cat Meowing" << endl;
  }

  ~Cat(){
    cout<< "~Cat dtor" << endl;
  }
};

class Parrot : public Animal{
public: 
  void sound() override
  {
    cout<< "Parrot Mittu Mittu" << endl;
  }

  ~Parrot(){
    cout<< "~Parrot dtor" << endl;
  }
};

void sound(Animal *animal){
  animal->sound(); //Polymorphic
  //*animal-> sound is behaving as per required object allocated at runtime
}

int main(){
  // Dog *dog = new Dog();
  // dog->sound();

  // Animal *animal = new Animal();
  // animal->sound();

  // Animal *animal = new Dog();
  // sound(animal);

  // animal = new Cat();
  // sound(animal);

  // animal = new Parrot();
  // sound(animal);

  // Animal a1;
  // a1.sound();

  // delete animal;

  //* Without Virtual(At Compile Time)
  // Animal *a = new Animal(); //!--> Animal
  // Animal *a = new Dog(); //!--> Animal
  // Dog *a = new Dog(); //!--> Dog
  // Dog *a = new Animal(); //!--> Dog

  //* With Virtual 
  // Animal *a = new Animal(); //!--> Animal 
  // Animal *a = new Dog(); //!--> Dog
  // Dog *a = new Dog(); //!--> Dog
  // Dog *a = new Animal(); //!--> Animal
      
 return 0;
}