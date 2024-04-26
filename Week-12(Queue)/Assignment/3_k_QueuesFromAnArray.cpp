#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//* K Queues from an Array
// n-> size of array
// k-> no of queues

class KQueue{
public:
  int n, k, freeSpot;
  int *arr, *front, *rear, *next;

  KQueue(int _n, int _k):n(_n), k(_k), freeSpot(0){
    arr = new int [n];
    next = new int[n];
    front = new int[k];
    rear = new int[k];

    for(int i=0;i<k;++i){
      front[i] = rear[i] = -1;
    }

    for(int i=0;i<n;++i){
      next[i] = i+1;
    }
    next[n-1] = -1;
  }

  
    //push x into qith Queue
    bool push(int x, int qi){
      //overflow 
      if(freeSpot == -1){
        return false;
      }

      // find first free index
      int index = freeSpot;

      //update freeSpot
      freeSpot = next[index];

      //if first element in qi
      if(front[qi] == -1){
        front[qi] = index;
      }
      else{
        //Link new element to that Q's rarest element
        next[rear[qi]] = index;
      }

      //update next
      next[index] = -1;

      //update rear
      rear[qi] = index;

      //push element in Array
      arr[index] = x;

      return true;
    }

    //pop the element from qith Queue
    int pop(int qi){
      //underflow
      if(front[qi] == -1){
        return -1;
      }

      //find index
      int index = front[qi];

      //front update
      front[qi] = next[index];

      //manage free spot
      //because hum isse index ke elment ko pop kr rhe hai toh ab array me ye spot free hogya hai
      next[index] = freeSpot;
      freeSpot = index;

      return arr[index];
    }

    ~KQueue(){
      delete[] arr;
      delete[] front;
      delete[] rear;
      delete[] next;
    }


};


int main(){
  KQueue kq(8,3);
  cout << kq.push(1,0) <<endl;
  cout << kq.push(2,0) <<endl;
  cout << kq.push(5,1) <<endl;
  cout << kq.push(3,0) <<endl;
  cout << kq.pop(1) <<endl;
  cout << kq.pop(1) <<endl;
  cout << kq.pop(0) <<endl;
  cout << kq.pop(0) <<endl;
  cout << kq.pop(0) <<endl;
  cout << kq.pop(0) <<endl;

  return 0;
}