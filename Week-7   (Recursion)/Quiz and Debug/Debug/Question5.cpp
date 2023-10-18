#include<iostream>
using namespace std;

//* Debug the code.
void removeConsecutiveDuplicates(char *input) {
	if(input[0] == '\0'){
        return;
    }
	if(input[0] == input[1]){
        int i = 2;
        for(;input[i]!='\0';i++){
            input[i-1] = input[i]; 
        }
        input[i-1] = input[i];
    }
    removeConsecutiveDuplicates(input+1);//*Change This called for next char
}
/*
Example:
xxab --> xab
*/
 
int main(){
 char ch[] = "xxab";
 cout<<ch<<endl;
 removeConsecutiveDuplicates(ch);
 cout<<ch<<endl;      
 return 0;
}