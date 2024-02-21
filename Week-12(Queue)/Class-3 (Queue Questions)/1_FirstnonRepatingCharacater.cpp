#include<iostream>
#include<queue>
using namespace std;

//* First Non Reapting Element in the Stream 

int main(){
 
  string s = "ababc";
  queue<char> q;
  int freq[26] = {0};

  for(auto ele:s){
    freq[ele-'a']++;
    q.push(ele);


    //Answer Find Karo
    while(!q.empty()){
      char frontCharacter = q.front();
      if(freq[frontCharacter - 'a'] > 1){
        //Yanni ye answer nhi 
        q.pop();
      }
      else{
        // ==1 vala case
        //Yhi anser hh
        cout << frontCharacter << "->";
        break;
      }
    }

    if(q.empty()){
      //koi answer nhi nikala
      cout << "#" << "->";
    }
  }
      
 return 0;
}