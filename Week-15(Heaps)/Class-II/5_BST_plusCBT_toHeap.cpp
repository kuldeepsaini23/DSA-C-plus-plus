#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
public:  
  int data;
  Node *left;
  Node *right;

  Node(int val){
    this->data = val;
    this->left = 0;
    this->right = 0;
  }
};

// Inserting into BST
Node* insertIntoBST(Node* root, int data){
  //First Node
  if(root == NULL){
    root = new Node(data);
    return root;
  }

  //Other nodes
  if(data > root->data){
    root->right = insertIntoBST(root->right,data);
  }else{
    root->left = insertIntoBST(root->left,data);
  }
  return root;
} 

// Create BST
void createBST(Node* &root){
  //Base Case
  cout <<"Enter Data: " << endl;
  int data;
  cin>>data;
  //Stop at minus 1
  while(data != -1){
    root = insertIntoBST(root, data);
    cout << "Enter Data: " << endl;
    cin >> data;
  }
}

//level Order
void levelOrder(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){

    Node* front = q.front();
    q.pop();

    //Checking if front is null or not
    if(front == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout << front->data << " ";

      if(front->left != NULL){
        q.push(front->left);
      }

      if(front->right != NULL){
        q.push(front->right);
      }
      
    }
  }
}

//* Convert BST + CBT to Max Heap
//Inorder
void storeInorderTraversal(Node* root, vector<int> &in){
  if(root == NULL){
    return;
  }

  //LNR Inorder
  storeInorderTraversal(root->left,in);
  in.push_back(root->data);
  storeInorderTraversal(root->right,in);
}

//setp:2 Replace using Postorder
void replaceUsingPostorder(Node* root, vector<int> in, int &index){
  if(!root){
    return;
  }

  //LRN Post Order
  replaceUsingPostorder(root->left,in,index);
  replaceUsingPostorder(root->right,in,index);
  root->data = in[index];
  index++; 
}

Node* convertBSTIntoMaxHeap(Node* root){
  //1 step: store inorder
  vector<int> inorder;
  storeInorderTraversal(root, inorder);

  //Ste2: Replace the node values with the sorted inorder values, using the postorder traversal
  int index = 0;
  replaceUsingPostorder(root, inorder,index);
  return root;
}
 
int main(){
  //Bst tree
  Node* root = NULL;
  createBST(root);
  cout << "Printing the BST: " << endl;
  levelOrder(root);
  cout << endl;

  cout << "Convertinh into Heap: "<<endl;

  root = convertBSTIntoMaxHeap(root);
  cout << "Printing the Heap: "<<endl;
  levelOrder(root);

      
 return 0;
}