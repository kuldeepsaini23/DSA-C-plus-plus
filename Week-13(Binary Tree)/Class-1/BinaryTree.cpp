#include<iostream>
#include<queue>
using namespace std;

//* Binary Tree
class Node{
public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    this->data = val;
    this->left = NULL;
    this->right = NULL;
  }
};

  //It returns Root node of the tree
Node* createTree(){
  cout <<"Enter the Value: " << endl;
  int data;
  cin>>data;

  if(data == -1){
    return NULL;
  }

  //Step:1 create Node
  Node* root = new Node(data);

  //Step2: Create left subtree
  cout << "Left Node of " << root->data << "is: " <<endl;
  root->left = createTree();

  //Step3: Create left subtree
  cout << "Right Node of " << root->data << "is: " <<endl;
  root->right =  createTree();

  return root;

}

void preOrderTraversal(Node* root){
  //base case
  if(root == NULL){
    return ;
  }

  //* N L R

  //* N
  cout << root->data << " ";

  //* L
  preOrderTraversal(root->left);

  //* R
  preOrderTraversal(root->right);
  
}


void inOrderTraversal(Node* root){
  //base case
  if(root == NULL){
    return ;
  }

  //* N L R

  //* L
  inOrderTraversal(root->left);

  //* N
  cout << root->data << " ";

  //* R
  inOrderTraversal(root->right);
  
}

void postOrderTraversal(Node* root){
  //base case
  if(root == NULL){
    return ;
  }

  //* N L R

  //* L
  postOrderTraversal(root->left);

 //* R
  postOrderTraversal(root->right);

  //* N
  cout << root->data << " ";
  
}

//! BFS(BREADTH FIRST SEARCH)
void levelOrderTraversal(Node* root){
  queue<Node*> q;
  q.push(root);

  //asli traversal start krte hai
  while(!q.empty()){
    Node* front = q.front();
    q.pop();

    cout<< front->data << " ";

    if(front->left != NULL){
      q.push(front->left);
    }

    if(front->right != NULL){
      q.push(front->right);
    }
  }
} 

//! BFS(BREADTH FIRST SEARCH)
//* Printing Level-wise
void levelOrderTraversalLevel(Node* root){
  queue<Node*> q;
  q.push(root);
  q.push(NULL);

  //asli traversal start krte hai
  while(!q.empty()){
    Node* front = q.front();
    q.pop();

    if(front == NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
      
    }
    else{
      cout<< front->data << " ";

      if(front->left != NULL){
        q.push(front->left);
      }

      if(front->right != NULL){
        q.push(front->right);
      }
    }

    
  }
} 


int main(){
  Node* root = createTree();
  cout << "PreOrderTraversal: ";
  preOrderTraversal(root);
  cout<< endl; 
  cout << "PostOrderTraversal: "; 
  postOrderTraversal(root);
  cout<< endl;
  cout << "InOrderTraversal: ";
  inOrderTraversal(root);
  cout<< endl;
  cout << "LevelORDERTraversal: ";
  levelOrderTraversal(root);
  cout<< endl;
  cout << "LevelORDERTraversal with Level: ";
  levelOrderTraversalLevel(root);
  cout<< endl;
          

 return 0;
}