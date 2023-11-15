#include<iostream>
using namespace std;
 
//! Linked List

//* Creating Node
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

  ~Node(){
    cout<< "Destructor Called for: " << this->data <<endl;
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

// //! Inserting In Linked List
// //* Inserting at head
void insertAtHead(Node* &head,Node* &tail, int data){

//   //!Empty Linked List
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

// //* Inserting at Tail
// void insertAtTail(Node* &head, Node* &tail, int data){
//   //! Empty Node
//   if(head == NULL){
//     //Create Node
//     Node* newNode = new Node(data);

//     //Attack to head
//     head = newNode;
//     tail = newNode;
//   }
//   else{
//     //Create new Node
//     Node* newNode = new Node(data);

//     //tail node ko attach kro new node se
//     tail->next = newNode;

//     //Update tail
//     tail = newNode;

//   }
// }

// void createTail(Node* &head, Node* &tail){
//   Node* temp = head;
//   while(temp->next != NULL){
//     temp = temp->next;
//   }

//   //Jab ye loop khtm hogya toh temp vala pointer hoga last node pe tab tail = temp krke tail ko last nod epe leaao

//   tail = temp;
// }

// //* Inster at a position
// void insertAtPosition(Node* &head, Node* &tail, int data, int position){
//   // if(position < 1){
//   //   cout<< "Cannot Insert, Please enter a valid position" << endl;
//   //   return;
//   // }

//   int length = getLength(head);
//   // if(position > length+1){
//   //   cout<< "Cannot Insert, Please enter a valid position" << endl;
//   //   return;
//   // }

//   if(position <= 1){
//     insertAtHead(head,tail,data);
//   }
//   else if(position >= length ){
//     insertAtTail(head,tail,data);
//   }
//   else{
//     //! Insert at middle of Linked List

//     //Create a new Node
//     Node* newNode = new Node(data);

//     //traverse to egt current, previsous to position
//     Node* prev = NULL;
//     Node* curr = head;

//     while(position != 1){
//       prev = curr;
//       // curr = prev->next;
//       curr = curr->next;
//       position--;
//     }

//     //Attach Prev node to new Node
//     prev->next = newNode;

//     //Attack new Node to Current
//     newNode->next = curr;
//   }

// } 

// //!H-w
// void insertAtPositionwithOne(Node* &head, Node* &tail, int data, int position){
//   // if(position < 1){
//   //   cout<< "Cannot Insert, Please enter a valid position" << endl;
//   //   return;
//   // }

//   int length = getLength(head);
//   // if(position > length+1){
//   //   cout<< "Cannot Insert, Please enter a valid position" << endl;
//   //   return;
//   // }

//   if(position <= 1){
//     insertAtHead(head,tail,data);
//   }
//   else if(position >= length ){
//     insertAtTail(head,tail,data);
//   }
//   else{
//     //! Insert at middle of Linked List

//     //Create a new Node
//     Node* newNode = new Node(data);

//     //traverse to egt current, previsous to position
//     Node* curr = head;

//     while(position != 2){
//       curr = curr->next;
//       position--;
//     }

//     //Attach Prev node to new Node
//     newNode->next = curr->next;

//     //Attack new Node to Current
//     curr->next = newNode;
//   }

// } 

//! Class-2
//* Delete
void deleteNode(Node* &head, Node* &tail, int position){
  //Empty Linked list
  if(head==NULL){
    cout << "Cannot delete, coz LL is empty" << endl;
    return;
  }

  if(head == tail){
    //*Single element
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
  }

  int len = getLength(head);

  //delete from head
  if(position == 1){
    //*First node ko delete krdo
    Node* temp = head;
    head = temp->next;
    temp->next = NULL;
    delete temp;

  }
  else if(position == len){
    //*Last node ko delete krdo
    Node* prev = head;
    while(prev->next != tail){
      prev = prev->next;
    }
    //Prev node ko link null kro
    prev->next = NULL;

    //Node delete kro
    delete tail;

    //Update tail
    tail = prev;
  }
  else{
    //Middle me koi node ko delete krdo
    Node* prev = NULL;
    Node* curr = head;

    while(position != 1){
      position--;
      prev = curr;
      curr = curr->next;
    }

    //Ste-2: prev-next me curre ka next node add kro
    prev->next = curr->next;

    //step-3: node isolate krdo
    curr->next = NULL;

    //Step:4 delete node
    delete curr;

  }
}

 
int main(){
 
  //* Creating a Node
  //* Static Allocation
  // Node a;

  //* Dynamic Allocation
  // Node* first = new Node(10);
  // Node* second = new Node(20);
  // Node* third = new Node(30);
  // Node* fourth = new Node(40);
  // Node* fifth = new Node(50);

  // first->next = second;
  // second->next = third;
  // third->next = fourth;
  // fourth->next = fifth;

  // Node *head = first;
  // Node *tail = fifth;

  //* Printing Linked List
  // printLinkedList(head);
  // cout << endl;

  //* Length of Linked List
  // cout << getLength(head) << endl;


  //* Insert At Head
  // insertAtHead(head,tail, 5);
  // printLinkedList(head);
  
  
  //* Insert At Head
  // insertAtTail(head,tail, 5);
  // printLinkedList(head);

  //! Creating our Link list with functions
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head,tail,40);
  insertAtHead(head,tail,30);
  insertAtHead(head,tail,20);
  insertAtHead(head,tail,10);

  printLinkedList(head);

  //* Insert at any Postion
  // insertAtPosition(head,tail,10,0);
  // insertAtPosition(head,tail,10,110);

  //Insert at 
  // insertAtPosition(head,tail,110,1);
  // printLinkedList(head);

  // insertAtPosition(head,tail,120,4);
  // printLinkedList(head);

  // insertAtPosition(head,tail,200,3);
  // printLinkedList(head);


  // insertAtPositionwithOne(head,tail,200000,3);
  // printLinkedList(head);      

  //!Class-2
  //*Delete
  // deleteNode(head, tail, 1);
  // printLinkedList(head);

  // deleteNode(head, tail, 4);
  // printLinkedList(head);

  deleteNode(head, tail, 3);
  printLinkedList(head);


  //* 



 return 0;
}