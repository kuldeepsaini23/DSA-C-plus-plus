#include<iostream>
#include<vector>
using namespace std;

//* ZigZag String
string convert(string s, int numRows) {
      if(numRows == 1) return s;      
      string ans = "";
      vector<string> zigzag(numRows);
      int i = 0, row =0;
      bool direction =1; //1--> T to B
      while(true){
          if(direction){
              while(row < numRows && i < s.size()){
                  zigzag[row++].push_back(s[i++]); 
              }
              row = numRows - 2; //direction change for else condition
          }else{
              while(row>=0 && i<s.size()){
                  zigzag[row--].push_back(s[i++]); 
              }
              row = 1;//direction change for If condition
          }
          if(i>=s.size()) break;
          direction = !direction;
      }
      for(int i=0; i<zigzag.size(); i++){
          ans+= zigzag[i];
      }
      return ans;
}   
 
int main(){
  string s = "kuldeep";
  int numRows = 2;
  cout<<convert(s,numRows); 
      
 return 0;
}