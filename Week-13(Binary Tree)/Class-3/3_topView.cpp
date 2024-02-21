#include<iostream>
#include<queue>
#include<map>
using namespace std;

//* Top View
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

//* It is using Level order tarversal
void printTopView(Node* root){
  map<int,int> horizontalIndexToNode;
  queue<pair<Node*,int>> q;
  q.push(make_pair(root,0));

  while(!q.empty()){
    pair<Node*,int> temp = q.front();
    q.pop();

    Node* frontNode = temp.first;
    int hd = temp.second;

    //If tehre is no entry for hd in map, then create a new entry
    if(horizontalIndexToNode.find(hd) == horizontalIndexToNode.end()){
      horizontalIndexToNode[hd] = frontNode->data;
    }

    // Child ko dkehna hh
    if(frontNode->left != NULL){
      q.push(make_pair(frontNode->left, hd-1));
    }

    if(frontNode->right != NULL){
      q.push(make_pair(frontNode->right, hd+1));
    }

  }
  cout << "Printing Top view: " << endl;
  for(auto i:horizontalIndexToNode){
    cout << i.second <<" ";
  }
}


int main(){
  Node* root = createTree();
  cout << "Printing Top View: "<<endl;
  printTopView(root);
      
 return 0;
}