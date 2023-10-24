#include<iostream>
using namespace std;

//! Macros
//* Increase Readability
//* Increase Maintainability
#define PI 3.14159465
#define MAX(x,y) (x>y ? x: y)

float circleArea(float r){
  return PI*r;
}

float circlePerimeter(float r){
  return 2*PI*r;
}

void fun(){
  int x = 6;
  int b = 17;
  int c = MAX(x,b);
  //* Above and below are same 
  // int c = x>b ? x : b;
}
 


void fun(){
  int x = 6;
  int y = 17;
  int c = MAX(x,y);
}



void fun(){
  int x = 20;
  int b = 17;
  int c = MAX(x,b);
}


int main(){
  
  cout<< circleArea(65.4);
 return 0;
}