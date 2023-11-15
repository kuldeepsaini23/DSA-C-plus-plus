#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;
  Node* prev;

  //* Constructor
  Node(){
    this->next = NULL;
    this->prev = NULL;
  }

  //* Parameterized Constructor 
  Node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }

  //* Destructor 
  ~ Node(){
    cout<< "Destructor is called for: " << this->data << endl; 
  }

};

//* Length
int getLength(Node* &head){
  Node* temp = head;
  int len = 0;
  while(temp!=NULL){
    len++;
    temp = temp->next;
  }
  return len;
}

//* Print 
void printDL(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << " <- " << temp->data << " -> ";
    temp = temp->next;
  }
  cout<<endl;
}



//* Insert AT Head
void insertAtHead(Node* &head, Node* &tail, int data){
  if(head == NULL){
    //*Empty LL
    //Creating new Node
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else{
    //* LL is not empty
    //Creating new Node
    Node* newNode = new Node(data);

    //Attach head prev to newNode
    head->prev = newNode;

    //Attach newNode next to head
    newNode->next = head;

    //Change head to new Node
    // head = head->prev;
    // or
    head = newNode;
  }

}

//* INsert at Tail
void insertAtTail(Node* &head, Node* &tail, int data){
  if(head == NULL){
    //*Empty LL
    //Creating new Node
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else{
    //* LL is not empty
    //Creating new Node
    Node* newNode = new Node(data);

    //Attach head prev to newNode
    tail->next = newNode;

    //Attach newNode next to head
    newNode->prev = tail;

    //Change head to new Node
    tail = tail->next;
      // or
    // tail = newNode;
  }
}


//* Insert at Postion
void insertAtPosition(Node* &head, Node* &tail, int data, int pos){
  if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else{
    int len = getLength(head);
    if(pos == 1){
      insertAtHead(head, tail, data);
    }
    else if(pos == len+1){
      insertAtTail(head, tail, data);
    }
    else{
      //Creating Node
      Node* newNode = new Node(data);

      //Find prevNode and currNode
      Node* currNode = head;
      Node* prevNode = NULL;
      while(pos != 1){
        prevNode = currNode; 
        // currNode = currNode->next;
        // or
        currNode = prevNode->next;
        pos--;
      }

      //Pointer updating
      prevNode->next = newNode;
      newNode->prev = prevNode;


      //Pointer Update
      currNode->prev = newNode;
      newNode->next = currNode;

    }
  }
}


//* Delete at any postion
void deleteNode(Node* &head, Node* &tail, int position){
  if(head == NULL){
    //Empty LL
    cout<< "The Linked List is empty First insert something";
    return;
  }

  //*Single Node case
  if(head == tail){
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
  }

  int len = getLength(head);
  cout<< "The length of the Nodes are: "<<len<<endl;
  if(position == 1){
    //*Deleet At head
    //Create a Temp Node
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp; 
  }
  else if(position == len){
    //* Delete at Tail
    Node* prevNode = tail->prev;
    prevNode->next = NULL;
    tail->prev = NULL;
    delete tail;
    prevNode = tail; 
  }
  else{
    //* Delete from middle
    //set prev, curr and nextNode

    Node* prevNode = NULL;
    Node* currNode = head;
    Node* nextNode = NULL;
    while(position != 1){
      position--;
      prevNode = currNode; 
      currNode = currNode->next;
    }

    nextNode = currNode->next;

    //Update prevNode Pointer
    prevNode->next = nextNode;

    //Update nextNode pointer
    nextNode->prev = prevNode;

    //Pointing currNod to null and delete it
    currNode->next = NULL;
    currNode->prev = NULL;

    delete currNode;

  }
}

 
int main(){
 
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head , tail, 50);
  insertAtHead(head , tail, 40);
  insertAtHead(head , tail, 30);
  insertAtHead(head , tail, 20);
  insertAtHead(head , tail, 10);
  printDL(head);
      
  insertAtTail(head, tail, 60);
  printDL(head);

  insertAtPosition(head,tail,35,4);
  printDL(head);

  deleteNode(head, tail, 1);
  deleteNode(head, tail, 3);
  deleteNode(head, tail, 6);
  deleteNode(head, tail, 7);
  printDL(head);

 return 0;
}