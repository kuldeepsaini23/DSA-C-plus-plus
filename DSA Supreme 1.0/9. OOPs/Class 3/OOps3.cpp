#include <iostream>
using namespace std;
//*Function/Method Overriding
class Animal
{
public:
  Animal()
  {
    cout << "I am inside Animal" << endl;
  }
  virtual void speak()
  {
    cout << "speaking" << endl;
  }
};

class Dog : public Animal
{
public:
  //*Function/Method Overriding
   Dog()
  {
    cout << "I am inside Dog" << endl;
  }
  void speak()
  {
    cout << "barking" << endl;
  }
};

int main()
{
  //*Function/Method Overriding
  // Dog a;
  // a.speak();

  // Animal* a = new Animal();
  // a->speak();

  // Dog* a = new Dog();
  // a->speak();

  //*Upcasting
  // Animal *a = new Dog();
  // a->speak();

  // //*Downcasting
  // Dog *b = (Dog *)new Animal();
  // b->speak();

  Animal* a = new Animal();
  Animal* a = new Dog();
  Dog* a = new Dog();
  Dog* a = (Dog*)new Dog();

  return 0;
}
