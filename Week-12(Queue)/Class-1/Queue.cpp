#include<iostream>
#include<queue>
#include<deque>
using namespace std;
//* Queue

class Queue{
public:
  int *arr;
  int size;
  int front;
  int rear;

  Queue(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1; 
  }

  //* push
  void push(int val){
    if(rear == size-1){
    cout << "Queue Overflow" << endl;
    }
    else if(front == -1 && rear == -1){
      front++;
      rear++;
      arr[rear] = val;
    }
    else{
      //normal case
      rear++;
      arr[rear] = val;
    }
  }
  
  //* Pop
  void pop(){
    //underflow
    if(rear ==-1 && front == -1){
      cout<< "Queue is Underflowed" << endl;
    }
    else if( front == rear){
      arr[front] = -1;
      front=-1;
      rear=-1;
    }
    else{
      arr[front] = -1;
      front++;
    }
  }

  //* Empty
  bool isEmpty(){
    if(front==-1 && rear==-1){
      return true;
    }
    else{
      return false;
    }
  }

  //* Getting size of Queue
  int getSize(){
    if(front == -1 && rear == -1){
      return 0;
    }
    else{
      return rear - front +1;
    }
  }

  //* getting front
  int getFront(){
    if(front==-1){
      cout<<"No Eleemnt in queue, cannot give front element"<<endl;
    }
    else{
      return arr[front];
    }
  }



  //* Get Rear (H/W)
  int getRear(){
    if(rear==-1){
      cout<<"No Eleemnt in queue, cannot give front element"<<endl;
    }
    else{
      return arr[rear];
    }
  }


  //* For our help But this doesnot exist
  void print(){
    cout << "Printing Queue" << endl;
    for (int i = 0; i < size; i++)
    {
      /* code */
      cout << arr[i] <<" ";
    }
    cout << endl;
  }

};


class CircularQueue{
public:
  int* arr;
  int size;
  int front;
  int rear;

  CircularQueue(int size){
    arr = new int(size);
    this->size = size;
    front=-1;
    rear = -1;
  }

  //*Push
  void push(int val){
    //Overflow
    if(front==0 && rear ==size-1 || rear == front-1){
      cout <<"Queue Overflowed" << endl;
    } 
    else if(front ==-1 && rear ==-1){
      //Empty case
      front++;
      rear++;
      arr[rear] = val;
    }
    else if(rear == size-1 && front !=0){
      //Circular Case
      rear = 0;
      arr[rear] = val;
    }
    else{
      //Normal Case
      rear++;
      arr[rear] = val;
    }
    
  }

  //* Pop
  void pop(){
    //Underflow
    if(front==-1 && rear==-1){
      cout << "Queue Underflow"<<endl;
    }
    else if(front==rear){
      //last elemnt remove krne ke 
      arr[front] = -1;
      // baad inital state pe jana chaiye 
      front=-1;
      rear = -1;
    }
    else if(front == size-1){
      //Circular case
      arr[front] = -1;
      front = 0;
    }
    else{
      //normal case
      arr[front] = -1;
      front++;
    }
  }

  //* Empty
  bool isEmpty(){
    if(front==-1 && rear==-1){
      return true;
    }
    else{
      return false;
    }
  }

  //* Getting size of Queue
  int getSize(){
    if(front == -1 && rear == -1){
      return 0;
    }
    else{
      return rear - front +1;
    }
  }

  //* getting front
  int getFront(){
    if(front==-1){
      cout<<"No Eleemnt in queue, cannot give front element"<<endl;
    }
    else{
      return arr[front];
    }
  }



  //*Rear
  int getRear(){
    if(rear==-1){
      cout<<"No Eleemnt in queue, cannot give front element"<<endl;
    }
    else{
      return arr[rear];
    }
  }


  //* For our help But this doesnot exist
  void print(){
    cout << "Printing Circular Queue: ";
    for (int i = 0; i < size; i++)
    {
      /* code */
      cout << arr[i] <<" ";
    }
    cout << endl;
  }

};

//* Normal Deque(Bekar Code: cannot pus_front after one time)
class Deque{
public:
  int *arr;
  int size;
  int front;
  int rear;

  Deque(int size){
    arr = new int(size);
    this->size = size;
    front = -1;
    rear = -1;
  }

  //* push back(Same as Normal Queue)
  void pushBack(int val){
    //Overflow
    //Empty Case
    //Normal Flow
    if(rear == size-1){
      cout << "Overflow" <<endl;
    }
    else if(
      front==-1 && rear == -1
    ){
      front++;
      rear++;
      //pushing at back
      arr[rear] = val;
    }
    else{
      rear++;
      arr[rear] = val;
    }

  }

  //* push Front
  void pushFront(int val){
    //Overflow
    //Empty Case
    //Normal Flow
    if(front == 0){
      cout << "Overflow" <<endl;
    }
    else if(
      front==-1 && rear == -1
    ){
      front++;
      rear++;
      //pushing at front
      arr[front] = val;
    }
    else{
      front--;
      arr[front] = val;
    }
  }

  //* Pop Back
  void popBack(){
    //underflow
    if(front == -1 && rear == -1){
      cout << "UnderFlow" << endl;
    }
    else if(front == rear){
      //Single element
      arr[rear] = -1;
      front=-1;
      rear = -1;
    }
    else{
      //normal flow
      arr[rear] = -1;
      rear--;
    }
  }

  //* pop Front(Same as noraml Queue)
  void popFront(){
    //underflow
    if(rear ==-1 && front == -1){
      cout<< "Queue is Underflowed" << endl;
    }
    else if( front == rear){
      arr[front] = -1;
      front=-1;
      rear=-1;
    }
    else{
      arr[front] = -1;
      front++;
    }
  }

};


//* Circular Deque(Acha Code)
class Deque{
public:
  int *arr;
  int size;
  int front;
  int rear;

  Deque(int size){
    arr = new int(size);
    this->size = size;
    front = -1;
    rear = -1;
  }

  //* push back(Same as Circular Queue)
  void pushBack(int val){
    //Overflow
    if(front==0 && rear ==size-1 || rear == front-1){
      cout <<"Queue Overflowed" << endl;
    } 
    else if(front ==-1 && rear ==-1){
      //Empty case
      front++;
      rear++;
      arr[rear] = val;
    }
    else if(rear == size-1 && front !=0){
      //Circular Case
      rear = 0;
      arr[rear] = val;
    }
    else{
      //Normal Case
      rear++;
      arr[rear] = val;
    }
    

  }

  //* push Front
  void pushFront(int val){
    //Overflow
    //Empty Case
    //Circular Flow
    //Normal Flow
    if(front==0 && rear ==size-1 || rear == front-1){
      cout <<"Queue Overflowed" << endl;
    }
    else if(
      front==-1 && rear == -1
    ){
      front++;
      rear++;
      //pushing at front
      arr[front] = val;
    }
    else if(front==0 && rear != size-1){
      //circular Nature
      front = size-1;
      arr[front] = val;
    }
    else{
      front--;
      arr[front] = val;
    }
  }

  //* Pop Back
  void popBack(){
    //Underflow
    if(front==-1 && rear==-1){
      cout << "Queue Underflow"<<endl;
    }
    else if(front==rear){
      //last elemnt remove krne ke 
      arr[front] = -1;
      // baad inital state pe jana chaiye 
      front=-1;
      rear = -1;
    }
    else if(rear == 0){
      //Circular case
      arr[rear] = -1;
      rear = size-1;
    }
    else{
      //normal case
      arr[front] = -1;
      front++;
    }
  }

  //* pop Front(Same as Circular Queue)
  void popFront(){
    //Underflow
    if(front==-1 && rear==-1){
      cout << "Queue Underflow"<<endl;
    }
    else if(front==rear){
      //last elemnt remove krne ke 
      arr[front] = -1;
      // baad inital state pe jana chaiye 
      front=-1;
      rear = -1;
    }
    else if(front == size-1){
      //Circular case
      arr[front] = -1;
      front = 0;
    }
    else{
      //normal case
      arr[front] = -1;
      front++;
    }
  }

};
 
int main(){
 
  //! Stl Queue
  // queue<int> q;

  //*Insertion
  // q.push(5);

  //*size
  // cout << "Size of Queue: " << q.size() << endl;

  //* empty
  // if(q.empty()==true){
  //   cout<<"Queue is empty" << endl;
  // }else{
  //   cout<<"Queue is not empty" << endl;
  // }

  //*Remove
  // q.pop();
  // cout << "Size of Queue: " << q.size() << endl;

  // q.push(10);
  // q.push(20);
  // q.push(30);

  //* At the front of queue
  // cout<< "Front elemnt of Queue is: " << q.front() << endl;

  //* At the end/back/rear of queue
  // cout << "Last lement of Queue is: " << q.back() << endl;

  //! Implemented Queue Class
  // Queue q(5);
  // q.print();

  //*Push
  // q.push(10);
  // q.print();

  // q.push(20);
  // q.push(30);
  // q.push(40);
  // q.push(50);
  // q.print();

  //* size
  // cout << "Size of Queue: " << q.getSize() << endl;

  //* Rmeoving
  // q.pop();
  // q.print();

  // cout << "Size of Queue: " << q.getSize() << endl;

  // cout << "Queue is empty or not: "<<q.isEmpty() << endl;

  // q.push(100);-->OVERFLOW

  //* front element
  // cout << "Front element in Queue is: "<<q.getFront()<<endl;

  //* rear element
  // cout << "Rear element in Queue is: "<<q.getRear()<<endl;
  // q.pop();
  // q.pop();
  // q.pop();
  // q.pop();
  // q.print();
  // q.pop();--> Queue UNDERFLOWED
  
  // cout << "Size of Queue: " << q.getSize() << endl;


 //! Circular Queue
 CircularQueue cq(5);
//  cq.print();
  //* Push
//  cq.push(10);
//  cq.print();

//  cq.push(20);
//  cq.push(30);
//  cq.push(40);
//  cq.push(50);
//  cq.print();
//  cq.push(56);-->Overflowed

  //*Pop
  // cq.pop();
  // cq.pop();
  // cq.pop();
  // cq.print();

  //* Now doing Circular Nature
  // cq.push(100);
  // cq.push(103);
  // cq.push(102);
  // cq.print();

  // cq.push(104);-->Again Overflowed

  //! Doubly Ended Queue
  deque<int> dq;

  //* push
  // dq.push_back(10);
  // dq.push_front(20);

  //* pop
  // dq.pop_back();-->10 pop
  // dq.pop_front();-->20 pop
  // cout << "Front: "<<dq.front()<<endl;
  // cout << "Back: " <<dq.back()<<endl;
  
  // cout << dq.size() << endl; 
  
      
 return 0;
}
