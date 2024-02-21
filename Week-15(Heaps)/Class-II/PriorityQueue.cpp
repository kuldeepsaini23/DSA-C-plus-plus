#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//* Priority Queue
 
int main(){
  //Create max heap
  priority_queue<int> pq;

  //isnertion
  pq.push(10);
  pq.push(20);
  pq.push(40);
  pq.push(50);

  // top element only can access top element i.e., max element
  cout << "Top Element of Max Heap: " << pq.top() <<endl;  

  //pop
  pq.pop();
  cout << "Top Element of Max Heap After POP: " << pq.top() <<endl;      

  //size
  cout << "The size of max Heap is: " << pq.size() << endl;

  //empty
  if(pq.empty()){
    cout << "Max heapEmpty" << endl;
  }
  else{
    cout << "Max heap Not Empty" << endl;
  }

  //* creating MIN HEAP
  priority_queue<int, vector<int>, greater<int>> pq2;
  //isnertion
  pq2.push(70);
  pq2.push(100);
  pq2.push(90);

  //top Element i.e, Smallest element
  cout << "The Top ELement of Min heap is: " << pq2.top() <<endl; 

  //pop
  pq2.pop();
  cout << "Top Element of Min Heap After POP: " << pq2.top() <<endl;      

  //size
  cout << "The size of Min Heap is: " << pq2.size() << endl;

  //empty
  if(pq2.empty()){
    cout << "Min heap Empty" << endl;
  }
  else{
    cout << "Min heap Not Empty" << endl;
  }



 return 0;
}
