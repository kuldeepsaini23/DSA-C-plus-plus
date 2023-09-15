#include<iostream>
using namespace std;
 
 
int main(){
//!SWitch case

  float a,b;
  cout<<"Enter the Two Numbers: "<<endl;
  cin>>a>>b;
  int op;
  cout<<"What Operation you want to do?"<<endl;
  cin>>op;
  float ans = 0;

  //op 0--> Add
  //op 1--> Sub
  //op 2--> Multiply
  //op 3--> Divide
  //else--> Invalid

  //* Making Calculator with Switch Case
  //TODO: op--> cannot be float, double or any fraction number. I can be int, cahr, short, long , long long and their unsigned version. 
  switch (op)
  {
  case 0:
    ans = a+b;
    break;

  case 1:
    ans = a-b;
    break;  

  case 2:
    ans = a*b;
    break;

  case 3:
    ans = a/b;
    break;    
  
  default:
  cout<<"Invalid operation"<<endl;
    return 0;
  }



 //*Making Calculator with if - elseif - else
  // if(op==0){
  //   ans = a+b;
  // }else if(op==1){
  //   ans = a-b;
  // }else if(op==2){
  //   ans = a*b;
  // }else if(op==3){
  //   ans = a/b;
  // }else{
  //   cout<<"Invalid Operation"<<endl;
  //   return 0;
  // }

  cout<<"Your Answer is: "<<ans<<endl; 

 return 0;
}