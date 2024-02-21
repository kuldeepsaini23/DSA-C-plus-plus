#include<iostream>
#include<stack>
using namespace std;
void insertInASortedArray(stack<int> &st, int element){
  if(st.empty() || element > st.top()){
    st.push(element);
    return;
  }

  //Processing
  int temp = st.top();
  st.pop();

  //Recrusion
  insertInASortedArray(st, element);

  //backtracking
  st.push(temp);
}

//* Sorting An Stack
void sortStack(stack<int> &st){
  if(st.empty()){
    return;
  }

  //Processing
  int temp = st.top();
  st.pop();

  //Recrusion
  sortStack(st);

  //backtracking
  insertInASortedArray(st,temp);
}
 
 
int main(){
  stack<int> st;
  st.push(40);
  st.push(10);
  st.push(20);
  st.push(50);
  st.push(30);

  sortStack(st);

  while(! st.empty() ){
    cout<< st.top()<<" ";
    st.pop();
  }cout<<endl;
      
 return 0;
}