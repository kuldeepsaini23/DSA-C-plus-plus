#include<iostream>
#include<limits.h>
using namespace std;

//* String to Integer
int myAtoi(string s) {
        int i=0,num=0, sign = 1;

        while(s[i]==' '){
            i++;
        }
        cout<<i<<endl;

        if(i < s.size() && (s[i]=='-' || s[i]=='+')){
            sign = s[i] == '+' ? 1 : -1;
            i++;
        }

        while(i<s.size() && isdigit(s[i])){
        if(num> INT_MAX/10 || (num== INT_MAX/10 && s[i]>'7')){
            return sign==-1 ? INT_MIN : INT_MAX;
        }
            num = num*10 + (s[i] - '0');
            cout<<num<<endl;
            ++i;
        }

        // if(num> INT_MAX/10 || (num== INT_MAX/10 && s[i]>'7')){
        //     return sign==-1 ? INT_MIN : INT_MAX;
        // }
       

        return num*sign;
    }


int mystoi(string s) {
  int len = s.size();
  double num = 0;
  int i=0;
  while(s[i] == ' '){
    i++;
  }
  bool negative = s[i] == '-';
  negative == true ? i++ : i;
  while(i <= len && s[i] >= '0' && s[i] <= '9'){
      num = num*10 + s[i] - '0';//* changed here 
      i++;
  }
  num = negative ? -num : num;
  num = (num > INT_MAX) ? INT_MAX : num;
  num = (num < INT_MIN) ? INT_MIN : num;
  return num;
}

int main(){
  string s = "123";
  cout<<myAtoi(s);
      
 return 0;
}