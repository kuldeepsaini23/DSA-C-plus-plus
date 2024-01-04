#include<iostream>
#include<unordered_map>
using namespace std;
 
void countCharacters(unordered_map<char,int> &mp, string s){
  for (int i = 0; i < s.length(); i++)
  {
    /* code */
    char ch = s[i];
    mp[ch]++;
  }
  
}
 
int main(){
  unordered_map<char,int> mp;

  string s = "lovebabbar";
  countCharacters(mp, s);

  for(auto i:mp){
    cout << i.first << ": " << i.second << endl;
  }

 return 0;
}