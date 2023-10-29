#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//! Abstraction
void fun(){
  string s = "Kuldeep";
  sort(s.begin(), s.end());
}
 
int main(){
  vector<int> v = {3,4,1,2};
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    cout<< i << endl;
  }
  
      
 return 0;
}