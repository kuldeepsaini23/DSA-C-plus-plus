#include<iostream>
#include<vector>
using namespace std;


void getSubsequences(string str){
  int n = str.length();
  vector<string> ans;
  // 1 ko n baar shidt krne se vo 2^n ban jayegaa
  for(int num=0; num < (1<<n); num++){
    // number is ready
    //use num tp create subsequence
    //use num to crate subsequence

    //num -> set bit(1) -> index pe hoga -> include that otherwise exclude
    string temp = "";
    for(int i =0; i< n; i++){
      //i represents index here 
      char ch = str[i];
      // agar i index pr num ke ander set bit present hai toh character ko include kro
      if(num & (1<<i)){
        temp.push_back(ch);
      }
    }
    ans.push_back(temp);
  }

  for(auto i: ans){
    cout << i << endl;
  }
}

 
int main(){
  string str = "abc";
  getSubsequences(str);
      
 return 0;
}