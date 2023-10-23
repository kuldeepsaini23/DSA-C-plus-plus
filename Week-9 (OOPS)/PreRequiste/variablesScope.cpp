#include<iostream>
using namespace std;


int x = 2; // GLOBAL VARIABLE

void fun(){
  int x = 60;
  cout<< x<< endl;
  ::x = 40;
  cout<< ::x <<endl;
}

int main(){
  ::x = 4; // global x
  cout<<"This is me "<<x<<endl;
  int x = 20; // local to main() function
  cout<< x<< endl;

  //* Accessing Global variable
  cout<< ::x<<endl;

  {
    int x = 50;
    cout<< x <<"Most Local"<<endl;
    //* Accessing Global variable
    cout<< ::x<<endl;
  }
  
  fun();
 return 0;
}