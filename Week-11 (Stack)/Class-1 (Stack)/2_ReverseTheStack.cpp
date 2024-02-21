#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st, int &element){
  //Base Case
  if(st.empty()){
    st.push(element);
    return;
  }

  //Processing
  int temp = st.top();
  st.pop();

  //Recrusion
  insertAtBottom(st, element);

  //backtracking
  st.push(temp);

}
 

//* Reverse a Stack
void reverseStack(stack<int> &st){
  //base Case
  if(st.empty()){
    return;
  }

  //processing
  int temp = st.top();
  st.pop();

  //Recrusion
  reverseStack(st);

  //Backtracking
  insertAtBottom(st,temp);

}
 
 
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  cout<<"Before"<<endl;
  // while(! st.empty() ){
  //   cout<< st.top()<<" ";
  //   st.pop();
  // }cout<<endl;


  reverseStack(st);
  cout<<"After"<<endl;

  while(! st.empty() ){
    cout<< st.top()<<" ";
    st.pop();
  }cout<<endl;

 
      
 return 0;
}