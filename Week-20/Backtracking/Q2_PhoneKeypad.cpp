#include<iostream>
#include<vector>
using namespace std;

//*  Letter Combinations of a Phone Number
void solve(string mapping[], string &output, int index, vector<string> & ans, string digits){
  //Base Case
  if(index >= digits.length()){
    if(output.length() > 0){
      //Yhi pe glti hoti hai
      ans.push_back(output);
    }
    return;
  }

  string temp = mapping[digits[index] - '0'];
  for(auto ch:temp){
    output.push_back(ch);
    solve(mapping, output,index+1, ans, digits);
    //Backtracking
    output.pop_back();
  }
}

vector<string> letterCombinations(string digits) {
  string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  string output = "";
  int index = 0;
  vector<string> ans;
  solve(mapping,output,index,ans,digits);
  return ans;
}
 
int main(){
  string digits = "23";
  vector<string> ans = letterCombinations(digits);

  for(auto str:ans){
    cout <<str<<endl;
  }
      
 return 0;
}