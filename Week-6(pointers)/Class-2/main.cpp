// #include<iostream>
#include<bits/stdc++.h>
using namespace std;
 

//* Pointers with functions
// void solve(int *arr, int size){
  // cout<<"Size of array: "<<sizeof(arr)<<endl;
  // cout<<"Inside solve function "<<arr<<endl;
  // cout<<"Inside solve function "<<&arr<<endl;
  //* Question 1
  // *arr = *arr + 1;
// }

//* pass by value
void solvestarp(int *p){
  *p = *p+1;
}

void solve(int *p){
  p = p+1;
}

//* pass by refernce
// void solve(int* &p){
//   p = p+1;
// }

int main(){
  

  // int arr[5] = {1,2,3,4,5};

  //* Array of pointer
  // int *ptr = arr; --> Error

  // char ch[10] = "Kuldeep";
  // char *cptr = &ch; --> Error

  //* Pointer to an array
  // int (*ptr)[5] = &arr;

  //* Pointers with functions
  // int arr[] = {10,20,30,40};
  // int size = 4;
  // cout<<"Size of array: "<<sizeof(arr)<<endl;
  // solve(arr,size);
  //* Concept
  // cout<<"Inside Main: "<<arr<<endl;
  // cout<<"Inside Main: "<<&arr<<endl;
  // solve(arr,size);
  
  //* Question 1
  // int arr[] = {10,20,30};
  // solve(arr,3);
  // for (int i = 0; i < 3; i++)
  // {
  //   /* code */
  //   cout<<arr[i]<<" ";
  // }


  //! Pointer to Pointer

  //* Question 1
  // int a = 5;
  // int *ptr = &a;
  // int **q = &ptr;
  // cout<<"A: "<<endl;
  // cout<<a<<endl;
  // cout<<&a<<endl;
  // cout<<"PTR: "<<endl;
  // cout<<ptr<<endl;
  // cout<<&ptr<<endl;
  // cout<<*ptr<<endl;
  // cout<<"Q: "<<endl;
  // cout<<q<<endl;
  // cout<<&q<<endl;
  // cout<<*q<<endl;
  // cout<<**q<<endl;
  
  //* Question 2
  // int a = 10;
  // int *p = &a;
  // int **q = &a; --> //! Wrong //error
  //TODO: How to resolve it
  //TODO: Method-1
  // int **q = &p;

  //TODO: Method-2
  // int *q = &a;
  // int *q = p;

  //*Question 3
  // int a = 10;
  // int *p = &a;
  // int **q = &p;
  // int **r = &p;
  // int ***s = &q;
  // cout<<"*s "<<*s<<endl;
  // cout<<"**r "<<**r<<endl;
  // cout<<"***s "<<***s<<endl;
  // cout<<"**q "<<**q<<endl;
  // cout<<"**s "<<**s<<endl;
  // cout<<"*q "<<*q<<endl;
  // cout<<"*p "<<*p<<endl;
  // cout<<"p "<<p<<endl;
  // cout<<"&s "<<&s<<endl;
  // cout<<"&r "<<&r<<endl;
  // cout<<"&q "<<&q<<endl; 
  // cout<<"**s+1 "<<**s +1<<endl;


  //* Question 4 -> Pass by value(By default) and Pass by reference
  int a = 5;
  int *p = &a;

  cout<<"p: "<<p<<endl;
  cout<<"&p: "<<&p<<endl;
  cout<<"*p: "<<*p<<endl;
  // solvestarp(p);
  // solve(p);
  cout<<"p: "<<p<<endl;
  cout<<"&p: "<<&p<<endl;
  cout<<"*p: "<<*p<<endl;

 return 0;
}