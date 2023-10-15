#include<iostream>
#include<vector>
using namespace std;
 
//* Subsequences of a String
void findSubsequences(string str, string output, int index, vector<string>& ans){
  //base Case
  if(index >= str.length()){
    //ans output string me build ho chukha hh //print krdo
    // cout<<"-->"<<output<<endl;
    ans.push_back(output);
    return;
  }

  char ch = str[index];
  //exclude
  findSubsequences(str,output,index+1,ans);

  //include
  //Outpput string me ch character ko includde krdo
  output.push_back(ch);
  findSubsequences(str,output,index+1,ans);

  //If wanna include then exclude then you have pop_back from the output 
}

int main(){
  //* Subsequences of a String
  string str = "abc";
  string output = "";
  int index = 0;
  vector<string> ans;
  findSubsequences(str,output,index,ans); 

  cout<<"Printing Vector: "<<endl;
  for(auto ch:ans){
    cout<<"->"<<ch<<endl;
  }
      
 return 0;
}