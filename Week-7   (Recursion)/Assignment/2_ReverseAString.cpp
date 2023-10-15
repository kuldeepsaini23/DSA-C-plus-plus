#include<iostream>
#include<algorithm>
using namespace std;
 
//* Reverse a string
void reverse(string &str, int s, int e){
  //Base Case
  if(s>=e){
    return;
  }

  //Processing
  swap(str[s],str[e]);

  //Recrusive Calls
  reverse(str, s+1, e-1);

} 
 
int main(){
  //* Reverse a string
  string str = "abcd";
  cout<<"Before Reverse: "<<str<<endl;
  int start = 0;
  int end  = str.length()-1;
  reverse(str, start, end);
  cout<<"After Reverse: "<<str<<endl;
      
 return 0;
}