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
 
int main(){
 
      
 return 0;
}