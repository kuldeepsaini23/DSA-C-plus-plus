#include<iostream>
#include<queue>
using namespace std;

//* Interleaving first and second half of Queue
void interLeaveQueue(queue<int>& first){
  queue<int> second;

  //PUSH FIRST HALF OF FIRST QUEUE IN SECOND QUEUE
  int size = first.size();
  for (int i = 0; i < size/2; i++)
  {
    /* code */
    int temp = first.front();
    first.pop();
    second.push(temp);
  }
  
  //Merge both the halves into the original queue - named as first

  for (int i = 0; i < size/2; i++)
  {
    /* code */
    int temp = second.front();
    second.pop();

    first.push(temp);
    //First ka element nikale aagse se piche lga diya
    temp = first.front();

    first.pop();
    first.push(temp);
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
  
  interLeaveQueue(q);

  cout << "Printng Queue: ";
  while(!q.empty()){
    int element = q.front();
    q.pop();
    cout << element << " ";
  }
      
 return 0;
}