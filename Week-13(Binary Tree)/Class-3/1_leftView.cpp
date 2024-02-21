#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// Making Binary Tree class
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

//Creating Binary Trree
Node* createTree(){
  cout <<"enter the value for the Node: ";
  int value;
  cin>>value;

  if(value == -1){
    return NULL;
  }

  //Create Node
  Node* root = new Node(value);
  cout << "Entering in the left of: " << value <<endl;
  root->left = createTree();

  cout << "Entering in the right of: " << value <<endl;
  root->right = createTree();

  return root;
}

//Pre order
void preOrder(Node* root){
  if(root == NULL){
    return;
  }

  cout << root->data <<" ";

  preOrder(root->left);

  preOrder(root->right);
}

//Inorder
void inOrder(Node* root){
  if(root == NULL){
    return;
  }
  inOrder(root->left);
  cout << root->data <<" ";
  inOrder(root->right);
}

//PostOrder
void postOrder(Node* root){
  if(root == NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data <<" ";
}

//Level Order Traversal
void levelOrder(Node* root){
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

      if(temp->right){
        q.push(temp->right);
      }
    }
  }
}


//* Left View in Binary tree
void printLeftView(Node* root, int level, vector<int> &leftView){
  //Base case
  if(root == NULL){
    return;
  }

  if(level == leftView.size()){
    //iska mtlb hume left view milgya hh
    leftView.push_back(root->data);
  }

  printLeftView(root->left, level+1, leftView);
  printLeftView(root->right, level+1, leftView);

}
 
int main(){
  Node* root = createTree();
  cout << "LevelOrder: " << endl;
  levelOrder(root);

  //* Left View
  int level = 0;
  vector<int> leftView;  
  printLeftView(root, level, leftView);    
  cout << "Left view: "<<endl;
  for(auto i:leftView){
    cout << i << " ";
  }


 return 0;

}
