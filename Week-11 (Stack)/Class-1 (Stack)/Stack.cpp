#include<iostream>
#include<stack>
using namespace std;

//* Stack

//*Implementation Itself
class Stack{
public:
  int* arr;
  int size;
  int top;

  Stack(int size){
    arr = new int[size];
    this->size = size;
    top = -1;
  }

  void push(int data){
    if(top==size-1){
      cout<< "Stack Overflow" <<endl;
      return;
    }else{
      top++;
      arr[top] = data;
    } 
  }

  void pop(){
    if(top==-1){
      cout<< "Stack Underflow" <<endl;
      return;
    }else{
      top--;
    }
    
  }

  bool isEmpty(){
    if(top==-1){
      return true;
    }else{
      return false;
    }
  }

  int getTop(){
    if(top==-1){
      cout << "Stack is empty" << endl;
    }else{
      return arr[top];
    }
    
  }

  int getSize(){
    return top+1;
  }

  void print(){
    cout << "Stack: ";
    for (int i = 0; i < getSize(); i++)
    {
      /* code */
      cout<< arr[i] << " ";
    }
    cout<<endl;
  }

};

//* Middle element in stack
void solve(stack<int> &st, int pos, int &ans){
  //Base Case
  if(pos == 1){
    //storing middle element
    ans = st.top();

    //deleting middle element
    // st.pop()

    //updatinf middle element
    // st.top() = 10;
    return;
  }

  //Ek case solving
  pos--;
  int temp = st.top();
  st.pop();

  //Recrusion
  solve(st,pos,ans);

  //Backtracking
  st.push(temp);
}

int getMiddleElement(stack<int> &st){
  int size = st.size();
  if(st.empty()){
    return -1;
  }else{
    //Stack is not empty
    //odd
    int pos = 0;
    if(size & 1){
      pos = size/2 +1; 
    }
    else{
      pos = size/2;
    }
    int ans = -1;
    solve(st,pos,ans);
    return ans; 
  }
  
}


int main(){
  // stack<int> st;

  //*Insertion
  // st.push(10);
  // st.push(20);
  // st.push(30);

  //*Size check
  // cout << "Size of the stack is: " << st.size() << endl;

  //*Remove
  // st.pop();


  //*Check Empty
  // if(st.empty()){
  //   cout<<"The Stack is empty"<<endl;
  // }
  // else{
  //   cout<<"The Stack is NOT Empty"<<endl;
  // }

  //* Top Element
  // cout<< st.top() << endl;

  //! Our Own Stack
  // Stack st1(8);

  //*push
  // st1.push(10);
  // st1.push(20);
  // st1.push(30);
  // st1.print();

  //*pop
  // st1.pop();
  // st1.print();

  //*Size
  // cout << "The size of the Stack is: " << st1.getSize();

  //* get Top
  // cout << "\nThe Top element: " << st1.getTop() << endl;

  //*Is empty
  // cout << st1.isEmpty()<<endl;


  //*Overflowing
  // st1.push(30);
  // st1.push(40);
  // st1.push(50);
  // st1.push(60);
  // st1.push(70);
  // st1.push(80);
  // st1.push(90);-->Overflowed
  // st1.print();


  //*Under Flowing
  // st1.pop();
  // st1.pop();
  // st1.pop();
  // st1.pop();
  // st1.pop();
  // st1.pop();
  // st1.pop();
  // st1.pop();
  // st1.pop();--> UnderFlowed


  //* Reverse using Stack
  // stack<char> st;
  // string str = "hellojee";

  // for (int i = 0; i < str.length(); i++)
  // {
  //   /* code */
  //   char ch = str[i];
  //   st.push(ch);
  // }

  // cout<<endl;
  // while(!st.empty()){
  //   cout << st.top();
  //   st.pop();
  // }cout<<endl;
  
  
  //! Middle of an stack
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);

  int mid = getMiddleElement(st);
  cout<< "Middle Element: "<< mid <<endl;

      
 return 0;
}