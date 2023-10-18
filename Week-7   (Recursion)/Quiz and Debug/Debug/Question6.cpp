#include<iostream>
using namespace std;

//* Debug the code.
void shift(char input[]){
    int i =1;
    for(;input[i]!='\0';i++)
        input[i-1] = input[i];
    input[i-1] = '\0';
}
void removeX(char input[]) {
  //* Add base Case
  if(input[0]=='\0')
    return;

  if(input[0]=='x'){
    shift(input);
  	removeX(input);
  }
  else
  removeX(input+1);
}

/*
Example:
xxab --> ab
*/
 
int main(){
  char s[] = "xxab";
  cout<<s<<endl;
  removeX(s);
  cout<<s;
      
 return 0;
}