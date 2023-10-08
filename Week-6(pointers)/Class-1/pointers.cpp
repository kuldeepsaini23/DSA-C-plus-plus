#include<iostream>
using namespace std;
 
 
int main(){
  //! Pointers

  // int a =5;
  // cout<<a<<endl;

  // cout<<"address of a: "<<&a<<endl;

  //* create pointer
  // int* ptr = &a;
  //*accessing value stored at address stored in ptr
  // cout<<ptr<<endl;
  // cout<<"Accessing: "<< *ptr<<endl;
  // cout<< &ptr <<endl;

  //* Size of pointer
  // int a = 5;
  // int *ptr = &a;
  // cout<<sizeof(ptr);

  // char ch = 'k';
  // char *cptr = &ch;
  // cout<<sizeof(cptr)<<endl;

  // long lachi = 5;
  // long *lptr = &lachi;
  // cout<<sizeof(lptr);

  //* declaration of pointer --> Bad practice
  //! DOnot do this
  // int *ptr;
  // cout<<*ptr<<endl;

  //* Use null pointer
  // int *ptr = 0;
  // int *ptr = nullptr;
  // cout<<*ptr<<endl;

  //! QUestions
  //* 1.  Adding by 1
  // int a = 100;
  // int *ptr = &a;
  // cout<<ptr<<endl;
  // cout<<"a: "<<endl;
  // a = a+1;
  // cout<<a<<endl;
  // cout<<"ptr: "<<endl;
  // ptr+=1;
  // cout<<ptr<<endl;

  //* 2. Adding *ptr +1
  // int a = 100;
  // int *ptr = &a;
  // a = a+1;
  // cout<<"a: "<<endl;
  // cout<<a<<endl;
  // cout<<"ptr: "<<endl;
  // *ptr+=1;
  // cout<<*ptr<<endl;

  //* 3. Operations on pointer
  // int a =100;
  // int *ptr = &a;
  // cout<<"a: "<<endl;
  // cout<<a<<endl;
  // cout<<&a<<endl;
  // cout<<*a<<endl;--> Error
  // cout<<"ptr: "<<endl;
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;
  // cout<<&ptr<<endl;
  // cout<<(*ptr)++<<endl;
  // cout<<++(*ptr)<<endl;
  // cout<<(*ptr)/2<<endl;
  // cout<<*ptr-2<<endl;

  //* 4. Operations Part-2
  // int a =5;
  // int *ptr = &a;
  // int *q = ptr;
  // cout<<"a: "<<endl;
  // cout<<a<<endl;
  // cout<<&a<<endl;
  // cout<<*a<<endl;--> Error
  // cout<<"ptr: "<<endl;
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;
  // cout<<&ptr<<endl;
  // cout<<"q: "<<endl;
  // cout<<q<<endl;
  // cout<<*q<<endl;
  // cout<<&q<<endl;


  // int a =5;
  // int *ptr = &a;
  // int *q = ptr;
  // int *r = q;
  // cout<<"a: "<<endl;
  // cout<<a<<endl;
  // cout<<&a<<endl;
  // cout<<*a<<endl;--> Error
  // cout<<"Ptr: "<<endl;
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;
  // cout<<&ptr<<endl;
  // cout<<"q: "<<endl;
  // cout<<q<<endl;
  // cout<<*q<<endl;
  // cout<<&q<<endl;
  // cout<<"r: "<<endl;
  // cout<<q<<endl;
  // cout<<*q<<endl;
  // cout<<&q<<endl;

  //! Pointers with Array
  
  // int arr[5] = {10,20,30,40,50};
  // cout<<arr<<endl;
  // cout<<&arr<<endl;
  // cout<<arr[0]<<endl;
  // cout<<&arr[0]<<endl;
  // cout<<*arr<<endl;
  // cout<<*arr+1<<endl;
  // cout<<(*arr)+1<<endl;
  // cout<<*(arr+1)<<endl;
  // cout<<*(arr+2)<<endl;
  // cout<<*(arr+3)<<endl;

  //* Question
  // int arr[4] = {10,20,30,40};
  // int *ptr = arr;
  // int *q = arr+1;
  // cout<<"Arr: "<<endl;
  // cout<<arr<<endl;
  // cout<<arr<<endl;
  // cout<<arr[0]<<endl;
  // cout<<&arr[0]<<endl;
  // cout<<"Ptr: "<<endl;
  // cout<<ptr<<endl;
  // cout<<&ptr<<endl;
  // cout<<*ptr<<endl;
  // cout<<"q: "<<endl;
  // cout<<q<<endl;
  // cout<<&q<<endl;
  // cout<<*q<<endl;
  // cout<<"Extra: "<<endl;
  // cout<<*ptr+1<<endl;
  // cout<<*ptr+2<<endl;
  // cout<<*q+2<<endl;
  // cout<<*(q+4)<<endl;

  //! Pointer on Char Array
  // char ch[50] = "kuldeep";
  // char *cptr = ch;
  // cout<<cptr;
  
  //* Question 1
  // char ch[50] = "love";
  // char *cptr = &ch[0];
  // cout<<"Ch: "<<endl;
  // cout<<ch<<endl;
  // cout<<&ch<<endl;
  // cout<<ch[0]<<endl;
  // cout<<"cptr: "<<endl;
  // cout<<&cptr<<endl;
  // cout<<*cptr<<endl;
  // cout<<cptr<<endl;

  //* Question 2 
  // char ch[50] = "statement";
  // char *cptr = &ch[0];
  // cout<<"Ch: "<<endl;
  // cout<<ch<<endl;
  // cout<<&ch<<endl;
  // cout<<*(ch+3)<<endl;
  // cout<<"cptr: "<<endl;
  // cout<<cptr<<endl;  
  // cout<<&cptr<<endl;
  // cout<<*(cptr+3)<<endl;
  // cout<<cptr+2<<endl;
  // cout<<*cptr<<endl;
  // cout<<cptr+8<<endl;

  //* Question 3(Exception)
  char ch = 'a';
  char *cptr = &ch;
  cout<<cptr;

  //* 4. Bad Practice
  // char ch[10] = "saini";
  // char *cptr = ch;

  //! Stored in temp menory for limited Time
  // char *c = "saini";
  // cout<<c<<endl;
  
  


 return 0;
}
