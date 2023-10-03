#include<iostream>
#include<algorithm>
using namespace std;
 
//* Custom Sort String
static string str;
//custom comperator
static bool compare(char char1, char char2){

  //!this will return true if position of character 1 in str string is less than the positon of character 2 in str string

  //!when true is returned then char will be placed before chara 2 in output string else should not be palced.
  return (str.find(char1)<str.find(char2));
}

string customSortString(string order, string s) {
  str = order;
  sort(s.begin(),s.end(),compare);     
  return s;
}


int main(){
 string order = "cba";
 string s = "abcd";
 cout<<customSortString(order,s);

      
 return 0;
}