#include<iostream>
using namespace std;
 
//*Decode the Message
string decodeMessage(string key, string message) {
  //create mapping
  char start = 'a';
  char mapping[256] = {0};
  for(auto ch:key){
    if(ch!=' ' && mapping[ch]==0){
      mapping[ch] = start;
      start++;
    }
  }

  //usemapping
  string ans;
  for (int i = 0; i < message.length(); i++)
  {
    /* code */
    char ch = message[i];
    if(ch == ' '){
      ans.push_back(' ');
    }else{
      char decodedMesaage = mapping[ch];
      ans.push_back(decodedMesaage);
    }
  }
  
  return ans;
          
} 
 
int main(){
 string key = "kuldeep saini";
 string message = "das";
 cout<<decodeMessage(key,message);     
 return 0;
}