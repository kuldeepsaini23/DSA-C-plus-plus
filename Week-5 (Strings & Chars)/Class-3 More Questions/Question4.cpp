#include<iostream>
#include<vector>
using namespace std;
 
//* Find and Replace Pattern

// function to create mapping
void createMapping(string &str){
  int start = 'a';
  char mapping[256] = {0};

  for(auto ch:str){
    if(mapping[ch] == 0){
      mapping[ch] = start;
      start++;
    }
  }

  //update the string
  for(int i=0; i<str.length(); i++){
    char ch = str[i];
    str[i] = mapping[ch];
  }
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
  vector<string> ans;

  //firstly normalize the pattern
  createMapping(pattern);
  cout<<pattern<<endl;

  //saare words k sath khelna hh
  for(string s:words){
    string tempString = s;

    //normalize --> mapping
    createMapping(tempString);

    if(tempString == pattern){
      //it means it is  a valid answer
      ans.push_back(s);
    }
  }
  return ans;
}

int main(){
  vector<string> words = {"foo","abb","joo"};
  string pattern = "pqq";
  findAndReplacePattern(words,pattern);
 return 0;
}