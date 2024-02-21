#include<iostream>
using namespace std;

//* Reverse in K group
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
 
int main(){
 
      
 return 0;
}