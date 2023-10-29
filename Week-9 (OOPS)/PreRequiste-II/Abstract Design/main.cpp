#include<iostream>
#include"bird.h"
using namespace std;

//! Abstraction Design
void birdDoSomething(Bird *&bird){
  bird->eat();
  bird->fly();
  bird->eat();
  bird->eat();
  bird->fly();
  bird->eat();
  bird->eat();
  bird->fly();
  bird->eat();
  bird->eat();
  bird->fly();
  bird->eat();

}
      
 
int main(){
  Bird *bird = new Sparrow();
  birdDoSomething(bird);

  // Sparrow *s = new Sparrow();
  // s->eat();//! Private hh but can access through bird

  bird = new Eagle();
  birdDoSomething(bird);

  bird = new Pigeon();
  birdDoSomething(bird);

  delete[] bird;
      
 return 0;
}