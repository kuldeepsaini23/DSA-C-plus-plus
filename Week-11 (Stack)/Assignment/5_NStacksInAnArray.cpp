#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//* N Stacks in an Array
class NStack{

  int *a,*top,*next;
  int n; //size of Stack
  int size; // size of array
  int freeSpot; // free location

public:
  NStack(int _n, int _s): n(_n), size(_s), freeSpot(0){
    a = new int[size];
    top = new int [n];
    next = new int[size];

    for(int i=0; i<size; ++i){
      next[i] = i+1;
    }
    next[size-1] = -1;

     for(int i=0; i<n; ++i){
      top[i] = -1;
    }
  }

// push X into mth Stack
  bool push(int X, int m){
    //Overflow
    if(freeSpot == -1){
      return false;
    }

    //1. find index
    int index = freeSpot;

    //2. update free spot
    freeSpot = next[index];

    //3. push in array
    a[index] = X;

    //4. update next
    next[index] = top[m-1];

    //5. update top
    top[m-1] = index;

    return true;
  }

  int pop(int m){
    // UnderFlow
    if(top[m-1] == -1){
      return -1;
    }

    // 1. find index
    int index = top[m-1];

    //2. update top
    top[m-1] = next[index];

    //3. pop element
    int poppedElement = a[index];

    //4. update next
    next[index] = freeSpot;

    //5. update freeSpot
    freeSpot = index;

    return poppedElement;
  }

  ~NStack(){
    delete[] a;
    delete[] top;
    delete[] next;
  }

};
 
 
int main(){

 NStack st(3,6);
 cout << st.push(10,1) << endl;
 cout << st.push(11,1) << endl;
 cout << st.push(12,1) << endl;
 cout << st.push(13,1) << endl;
 cout << st.push(14,2) << endl;
 cout << st.push(15,3) << endl;
 cout << st.push(16,1) << endl;
 cout << st.pop(1) << endl;

 
      
 return 0;
}