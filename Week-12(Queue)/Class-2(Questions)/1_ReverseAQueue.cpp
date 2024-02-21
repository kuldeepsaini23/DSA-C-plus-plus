#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//* Solving with stack
void reverseQueue(queue<int> &q){
 stack<int> s;

 //one by one queue se elemnt lo aur stack me daalo
 while(!q.empty()){
  int frontElement = q.front();
  q.pop();

  s.push(frontElement);
 }

  //one by one stack se lo aur queeu me daalo
  while(!s.empty()){
    int element = s.top();
    s.pop();

    q.push(element);
  }

}

//* Solving with Recrusion
void reverseWithRecrusion(queue<int> &q){
  //base case
  if(q.empty()){
    return;
  }

  //processing 
  int element = q.front();
  q.pop();

  reverseWithRecrusion(q);

  q.push(element);
}
 
int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  // reverseQueue(q);
  reverseWithRecrusion(q);

  cout << "Printng Queue: ";
  while(!q.empty()){
    int element = q.front();
    q.pop();
    cout << element << " ";
  }
      
 return 0;
}