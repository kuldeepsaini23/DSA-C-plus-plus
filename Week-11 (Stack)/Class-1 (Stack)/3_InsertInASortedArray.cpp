#include<iostream>
#include<stack>
using namespace std;

//* Insert In A Sorted Array
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
 
 
int main(){
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  int element = 29;

  insertInASortedArray(st,element);
  cout<<"After"<<endl;

  while(! st.empty() ){
    cout<< st.top()<<" ";
    st.pop();
  }cout<<endl;
      
 return 0;
}