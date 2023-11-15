#include<iostream>
using namespace std;

class ListNode{
public:
  int data;
  ListNode* next;

  //Constructor
  ListNode(){
    this->next = NULL;
  }

  //Parameterized Constructor
  ListNode(int data){
    this->data = data;
    this->next = NULL;
  }

  //Destructor
  ~ListNode(){
    cout << "The destructor is called for: " << this->data <<endl; 
  }
};

//* Find starting point of the Loop


ListNode* getStartingPointOfLoop(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
      slow = slow->next;
    }

    if(fast == slow){
      break;
    }
  }

  //Make slow head
  slow = head;

  //And satrt the lopp with 1 stemp each time
  while(fast != slow){
    slow = slow->next;
    fast = fast->next;
  }

  return slow;
  //Can also return fast;

}
 
int main(){
 
      
 return 0;
}