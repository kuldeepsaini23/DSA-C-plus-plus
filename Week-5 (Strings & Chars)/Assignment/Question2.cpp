#include<iostream>
using namespace std;

//* Reverse Only letters
string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length()-1;
    
        while(i<j){
            if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))){
                i++;          
            }else if(!isalpha(s[j])){
                j--;
            }else if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
 
int main(){
  string s = "ab-cd";
  cout<<reverseOnlyLetters(s);
      
 return 0;
}