#include<iostream>
#include<algorithm>
using namespace std;

//! Valid Anagram
//* Brute Force (sorting)
 bool areAnagram(string S1, string S2) {
    // code here
    sort(begin(S1),end(S1));
    sort(begin(S2),end(S2));
    
    // for(int i=0;i<S1.length();i++){
    //     if(S1[i]!=S2[i]){
    //         return 0;
    //     }
    // }
    
    // return 1;
    
    S1==S2 ? 1 : 0;
}

//* Counting 
bool isAnagram(string s, string t){
  int freqTable[256] = {0};

  for(auto ch:s){
    freqTable[ch]++;
  }

  for(auto ch:t){
    freqTable[ch]--;
  }

  for(int i=0; i<256;i++){
    if(freqTable[i]>0){
      return false;
    }
  }
  return true;
} 
 
int main(){
  // string s = "anagram";
  // string t = "nagaram";
  string s = "car";
  string t = "rat";  
  bool ans = isAnagram(s,t);
  if(ans){
    cout<<"Anagram"<<endl;
  }else{
    cout<<"Not a Anagram"<<endl;
  }
      
 return 0;
}