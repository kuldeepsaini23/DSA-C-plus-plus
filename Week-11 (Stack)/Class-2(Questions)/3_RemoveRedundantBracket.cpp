#include<iostream>
#include<stack>
using namespace std;


//* Remove Redundant Bracket
bool checkRedundant(string s){
  stack<char> st;
  for (int i = 0; i < s.length(); i++)
  {
    /* code */
    char ch = s[i];
    if(ch == '(' || ch == '+'|| ch == '-'|| ch == '*'|| ch == '/'){
      st.push(ch);
    }
    else if(ch == ')'){
      //counting how many operator
      int opCount = 0;
      while( !st.empty() && st.top() != '(' ){
        char temp = st.top();
        if(temp == '+'|| temp == '-'|| temp == '*'|| temp == '/'){
          opCount++;
        }
        st.pop();
      }

      //yha apr operator count krne ke baad
      //  and stack ek top pe opening brack hh
      st.pop();
      if(opCount == 0){
        return true;
      }
    }
  }

  //agar main yha tk pohoccha hu
  //iska mtlb k har ek bracket k pair ke beech me 
  // ek operator pkka mila hh 
  return false;
  
}
 
int main(){
  string str = "(((a+b)*(c+d)))";

  bool ans = checkRedundant(str);

  if(ans == true){
    cout << "Reduandant Brackets Present" <<endl;
  }
  else{
    cout << "Reduandant Brackets Not Present" <<endl;
  }
      
 return 0;
}