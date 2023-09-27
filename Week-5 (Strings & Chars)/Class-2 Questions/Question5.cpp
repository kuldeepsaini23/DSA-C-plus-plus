#include<iostream>
using namespace std;
 
int expand(string s, int i, int j){
  int count = 0;

  while(i>=0 && j < s.length() && s[i]==s[j]){
    count++;
    i--;
    j++;
  }
  return count;
}

int countSubstring(string s){
  int totalCount = 0;

  for(int center = 0; center< s.length();center ++){
    //Odd
    int oddKaAns = expand(s,center,center);

    //Even 
    int evenKaAns = expand(s, center, center+1);

    totalCount = totalCount + oddKaAns + evenKaAns;
  }

  return totalCount;
}


int main(){
  // string s = "MADAM";
  string s = "aaa";
  cout<<countSubstring(s);
      
 return 0;
}