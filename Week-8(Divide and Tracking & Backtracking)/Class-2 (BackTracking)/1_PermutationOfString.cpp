#include<iostream>
#include<algorithm>
using namespace std;

//* Permutation of Strings
//! Without Refernce
void printPermutation(string str, int i){
  //Base Case
  if(i>= str.size()){
    cout<< str<<endl;
    return;
  }

  //Ek case em solve krta hu baki recrusion dekhelgaa
  for (int j = i; j < str.size(); j++)
  {
    /* code */
    swap(str[i],str[j]);
    //Recrusion Bhaiya
    printPermutation(str, i+1);
  }  
  
}

//! With Refernce
void printPermutationRefernce(string &str, int i){
  //Base Case
  if(i>= str.size()){
    cout<< str<<endl;
    return;
  }

  //Ek case em solve krta hu baki recrusion dekhelgaa
  for (int j = i; j < str.size(); j++)
  {
    /* code */
    swap(str[i],str[j]);
    //Recrusion Bhaiya
    printPermutationRefernce(str, i+1);
    //Backtracking
    swap(str[i], str[j]);
  }  
  
}


int main(){
  string s = "abc";
  int i = 0;
  printPermutation(s,i);

 return 0;
}
