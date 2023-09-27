#include<iostream>
using namespace std;
//* Remove all occurances of a substring
string removeOccurances(string s, string part){
  while(s.find(part) != string::npos){
    s.erase(s.find(part), part.length());
  }
  return s;
}
 
int main(){
//  string str = "abbcbaddcbabbbaae";
  string str = "abccbabadddccbabaaaee";
  string part = "cba";

 cout<<removeOccurances(str,part);
      
 return 0;
}