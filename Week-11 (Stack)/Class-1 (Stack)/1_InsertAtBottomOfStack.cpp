#include<iostream>
#include<stack>
using namespace std;

//* Insert element at the bottom
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
 
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  
  int element = 400;

  insertAtBottom(st,element);

  while(! st.empty() ){
    cout<< st.top()<<" ";
    st.pop();
  }cout<<endl;


  
      
 return 0;
}
