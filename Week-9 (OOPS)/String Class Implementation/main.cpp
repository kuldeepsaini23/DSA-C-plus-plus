#include<iostream>
#include<string>
#include"MyString.h"
using namespace std;
 
 
int main(){
  // string s = "Kuldeep";

  MyString s("Kuldeep the");
  MyString s1 = "mobile";
  cout << s << " " << s1 << endl;

  cout << s[0] << endl;


  cout << s.find("deep");
      
 return 0;
}