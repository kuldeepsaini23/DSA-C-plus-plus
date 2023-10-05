#include<iostream>
using namespace std;

//* Debug the code.

void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start; i<j; i++,j--){ //* changed i!=j to i<j
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;

    }
    cout<<"Print: "<<input<<endl;
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!=0){
        i++;
        count++;
        //* Added if words have space between them
        if((input[i]==' ' || input[i]=='\0')){
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
    }
    cout<<input<<endl;
}
 
int main(){
  char ch[11] = "helo world";
  int size = 10;
  int start = 0;
  reverseString(ch,size,start);

//   reverseEachWord(ch);

      
 return 0;
}