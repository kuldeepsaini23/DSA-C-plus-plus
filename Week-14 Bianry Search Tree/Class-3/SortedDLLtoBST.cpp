#include<iostream>
#include<queue>
using namespace std;


class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int value){
    this->data = value;
    this->left = NULL;
    this->right = NULL;
  }
};
 
//level order tarversal
void levelOrderTraversal(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout << temp->data << " ";
      if(temp->left != NULL){
        q.push(temp->left);
      }

      if(temp->right != NULL){
        q.push(temp->right);
      }
    }

  }
} 


//* Converting Sorted DLL to BST
Node* convertDLLtoBST(Node* &head, int n){
  //Base Case
  if(head == NULL || n<=0){
    return NULL;
  }

  //LNR
  // cout << "Leftsubtree"<<endl;
  //L
  Node* leftSubTree = convertDLLtoBST(head, n/2);

  //N
  Node* root = head;
  root->left = leftSubTree;
  //* most impt Step update head
  head = head->right;

  //R
  Node* rightSubTree = convertDLLtoBST(head, n-n/2-1);
  root->right = rightSubTree;
  return root;

}
 
void printLinkedList(Node* head){
  Node* temp = head;
  cout << "Printing Linked List: "<<endl;
  while(temp != NULL){
    cout << temp->data << "<->";
    temp = temp->right;
  }
  cout << endl;
}

int main(){
  //Doubly Lined List
  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* four = new Node(40);
  Node* five = new Node(50);

  first->right = second;
  second->left = first;
  second->right = third;
  third->left = second;
  third->right = four;
  four->left = third;
  four->right = five;
  five->left = four;

  Node* head = first;
  Node* tail = five;
  int n = 5;

  //Printing DLL 
  printLinkedList(head);

  //DLL to BSt
  Node* root = convertDLLtoBST(head,n);
  cout << "Prinitng BST Level Wise: "<<endl;
  levelOrderTraversal(root);
      
 return 0;
}
