#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(){
    cout<< "I am inside Default constructor" << endl;
    this->next = NULL;
  }

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

void printLinkedList(Node* head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout<<endl;
}

int getLength(Node* head){
  Node* temp = head;
  int count = 0;
  while(temp != NULL){
    count ++;
    temp = temp->next;
  }

  return count;
}


void insertAtHead(Node* &head,Node* &tail, int data){

  //!Empty Linked List
  if(head == NULL){
    //Create new node
    Node* newNode = new Node(data);

    //Update Head
    head = newNode;
    tail = newNode;
  }
  else{
    //create a new node
    Node* newNode = new Node(data);

    //Attatch new node to head node
    newNode->next = head;

    //Update Head
    head = newNode;
  }

}

Node* reverse(Node* &head){
  Node* prev = NULL;
  Node* curr = head;

  while(curr!= NULL){
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  // head = prev;
  return prev;
}
//* Add one to Linked List
void addOne(Node* &head){
  //*reverse
  head = reverse(head);

  //add 1
  int carry = 1;
  Node* temp = head;
  while(temp->next != NULL){
    int totalSum = temp->data + 1;
    int digit  = totalSum % 10;
    carry = totalSum/10;

    temp->data = digit;
    temp = temp->next; //(temp++ in Linked list)

    if(carry == 0 ){
      break;
    }
  }
  //Process last Node
  if(carry != 0){
    int totalSum = temp->data + carry; 
    int digit = totalSum%10;
    carry = totalSum/10;
    temp->data = digit;

    if(carry != 0 ){
      Node* newNode = new Node(carry);
      temp->next = newNode;
    }
  }

  //* Again Reverse
  head = reverse(head);
  
}


 
int main(){

  Node* head = NULL;
  Node* tail = NULL;
 
  insertAtHead(head, tail, 9);
  insertAtHead(head, tail, 9);
  insertAtHead(head, tail, 9);
  insertAtHead(head, tail, 9);

  printLinkedList(head);

  addOne(head);
  printLinkedList(head);
  
      
 return 0;
}