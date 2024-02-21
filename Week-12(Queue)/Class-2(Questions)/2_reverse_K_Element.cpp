#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//* reverse K Element
void reverseFirstK(queue<int> &q, int k){
  stack<int> s;
  int n = q.size();
  if(k>n || k==0){
    return;
  }

  //push first k elements into the stack
  for (int i = 0; i < k; i++)
  {
    /* code */
    int temp = q.front();
    q.pop();
    s.push(temp);
  }
  

  //push all k element into queue
  while(!s.empty()){
    int element = s.top();
    s.pop();

    q.push(element);
  }
  
  //pop and push first(n-k) lemenet into queue again
  for (int i = 0; i < (n-k); i++)
  {
    /* code */
    int temp = q.front();
    q.pop();
    q.push(temp);
  }

}
 
int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  reverseFirstK(q,3);

  cout << "Printng Queue: ";
  while(!q.empty()){
    int element = q.front();
    q.pop();
    cout << element << " ";
  }
      
 return 0;
}