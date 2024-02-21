#include<iostream>
using namespace std;


//* Implement Two stacks in an Array
class Stack{
 public: 
  int* arr;
  int size;
  int top1;
  int top2;

  Stack(int size){
    arr = new int[size];
    this->size = size;
    top1 = -1;
    top2 = size;
  }

  void push1(int data){
    if(top2 - top1 == 1){
      //no space available
      cout<< "OVERFLOW" <<endl;
    }else{
      top1++;
      arr[top1] = data;
    }
    

  }

  void push2(int data){
    if(top2 - top1 == 1){
      //no space available
      cout<< "OVERFLOW" <<endl;
    }else{
      top2--;
      arr[top2] = data;
    }
  }

  void pop1(){
    if(top1==-1){
      //stack1 is empty
      cout << "UNDERFLOW" << endl;
    }else{
      arr[top1] = 0;
      top1--;
    }
  }

  void pop2(){
    if(top2 == size){
      cout<< "UNDERFLOW" << endl;
    }else{
      arr[top2] = 0;
      top2++;
    }
  }

  void print(){
    cout<<endl;
    cout <<"Top 1: " << this->top1<<endl;
    cout <<"Top 2: " << this->top2<<endl;
    for (int i = 0; i < size; i++)
    {
      /* code */
      cout<< arr[i] << " ";
    }
    cout<<endl;
  }

};

 
int main(){
 
  Stack st(6);
  st.print();

  st.push1(10);
  st.print();

  st.push1(20);


  st.push2(100);
  st.push2(200);
  st.print();

  st.push2(300);
  st.push2(700);
  st.print();

  //* OVERFLOW
  st.push2(200);
  st.push1(400);
      
  //* Poping
  st.pop1();
  st.pop1();
  st.print();


  //*UNDERFLOW from satck1
  st.pop1();

  //*Poping from stack 2
  st.pop2();
  st.print();

 return 0;
}
