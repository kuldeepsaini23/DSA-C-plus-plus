#include<iostream>
using namespace std;

//* Custom substr function
string mySubstr(string s, int start, int end){
  string newS;

  for (int i = start; i < end; i++)
  {
    /* code */
    newS.push_back(s[i]);
  }
  return newS;
}

//* Custom concat function
string concat(string s1, string s2){
  string s;
  for(auto word:s1){
    s.push_back(word);
  }

  for (int i = 0; i < s2.length(); i++)
  {
    /* code */
    s.push_back(s2[i]);
  }  

  return s;
}

string removeOccurrences(string s, string part) {
  // cout<<s.size()<<endl;
  // cout<<s.length()<<endl;
  while(1){
    int found = s.find(part);
    if(found == string::npos) break;

    //* Custom remove function
    //Here Inbuild substr and cocnat is been used
    // string LP = s.substr(0,found);
    // string RP = s.substr(found+part.size(),s.length());
  

    //concat both string
    // s = LP + RP; 

    //* Using custom substr and concat
    string myLP = mySubstr(s,0,found);
    string myRP = mySubstr(s,found+part.size(),s.length());
    
    s = concat(myLP,myRP);
  }        

  return s;
}
 
int main(){
  string s = "daabcbaabcbc";
  string part = "abc";
  cout<<removeOccurrences(s,part);
      
 return 0;
}