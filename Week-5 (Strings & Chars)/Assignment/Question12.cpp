#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Largest Number
bool mycomp(string a, string b){
      string t1 = a+b;
      string t2= b+a;
      return t1>t2;
}

string largestNumber(vector<int>& nums) {
      vector<string> snums;
      //converting int to string
      for(auto n: nums){
          snums.push_back(to_string(n));
      }   
      //sorting
      sort(snums.begin(), snums.end(),mycomp);
      string ans="";
      if(snums[0] == "0"){
          return ans = snums[0];
      }
      
      for(auto s:snums){
          ans+=s;
      }
      return ans;
}
int main(){
  vector<int> arr = {4,9,2,34,30,3};
  cout<<largestNumber(arr);
      
 return 0;
}