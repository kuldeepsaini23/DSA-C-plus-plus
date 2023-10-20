#include<iostream>
#include<cmath>
using namespace std;
 

//* Number of Subsequence without Recrusion
void subsq(string &s){
  int num_subs = pow(2,s.size());

  for (int n = 0; n < num_subs; n++)
  {
    /* code */
    string out;
    int num = n;

    //Convert num to binary(below is the method of converting any number to binary)
    int  i =0;
    while(num){
      int b = (num&1);
      if(b){
        out.push_back(s[i]);
      }
      ++i;
      num>>=1;
    }

    cout<<out<<endl;

  }
  
} 

 
int main(){
  string s = "abc";
  subsq(s);
 return 0;
}
