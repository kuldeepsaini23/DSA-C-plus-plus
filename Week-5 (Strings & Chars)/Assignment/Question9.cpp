#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* String Compression
int compress(vector<char>& s) {
      int index = 0, count =1;
      int prev = s[0];
      for(int i = 1; i<s.size();i++){
          if(s[i] == prev){
              count++;
          }else{
              s[index++] = prev;
              // index++;
              if(count>1){
                  int start = index;
                  while(count){
                      s[index++] = (count % 10) + '0';
                      count/=10;
                  }
                  reverse(s.begin()+start, s.begin()+index);
                  // index++; 
              }
              prev = s[i];
              count = 1;
          }
      }
      s[index] = prev;
      index++;
      if(count>1){
          s[index] = count;
      }
      return index;
}

int main(){
 vector<char> chars = {'a','a','a','a','b','b','d'};
 cout<<compress(chars);
      
 return 0;
}