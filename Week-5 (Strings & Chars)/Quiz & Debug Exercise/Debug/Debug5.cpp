#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Debug the code. Sort vowels in a string. Characters are alphabets.
bool isVowel(char ch) {
  return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
}
    
string sortVowels(string s) {
    string t = s;
    vector<char> vowel;
    
    for(int i=0;i<s.length();i++){
      if(isVowel(s[i])) vowel.push_back(s[i]);
    }
    
    if(vowel.size()==0) return s;
    
    sort(vowel.begin(), vowel.end());
    
    int j=0;
    for(int i=0;i<t.length();i++){
        if(isVowel(t[i])) {
          t[i]=vowel[j++];//* Changed ++j to j++
        }
    }
    
    return t;
}
 
int main(){
  string s = "EOUAEI";
  cout<<sortVowels(s);
      
 return 0;
}