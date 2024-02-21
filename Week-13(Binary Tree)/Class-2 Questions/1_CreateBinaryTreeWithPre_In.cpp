#include<iostream>
#include<queue>
#include<map>
using namespace std;

//! Creating Binary Tree using PreOrder and Inorder
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

//Searching in order
int searchInorder(int inorder[], int size, int target){
  for(int i=0; i<size;i++){
    if(inorder[i] == target){
      return i;
    }
  }
  return -1;
}
 
//Printing tree level wise 
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

//Create mapping to reduce search time
void createMapping(int inorder[], int size, map<int,int> &valueToIndexMap){
  for (int i = 0; i < size; i++)
  {
    /* code */
    int element = inorder[i];
    int index = i;
    valueToIndexMap[element] = index;
  }
  
}


//* Creating Tree
Node* constructTreeFromPreAndInorderTraversal(int preorder[], int inOrder[], int &preIndex, int inOrderStart, int inOrderEnd, int size, map<int,int> &valueToIndex){
  //Base Case
  if(preIndex >= size || inOrderStart > inOrderEnd){
    return NULL;
  }

  //  1 case me solve krta hu
  int element = preorder[preIndex];
  preIndex++;

  Node* root = new Node(element);
  //element ssearch krna padegaa inorder  me jakes
  //* Through Linear search and Bianry Search
  // int position = searchInorder(inOrder, size, element);
  //*using Map for searching beacsue it takes O(1) to search
  int position = valueToIndex[element];

  //Constructing left subtree
  root->left = constructTreeFromPreAndInorderTraversal(preorder, inOrder, preIndex, inOrderStart, position-1, size,valueToIndex);

  //Constructing Right subtree
  root->right = constructTreeFromPreAndInorderTraversal(preorder, inOrder, preIndex, position+1, inOrderEnd, size,valueToIndex); 

  return root;
}

int main(){
  int inOrder[] = {10,8,6,2,4,12};
  int preOrder[] = {2,8,10,6,4,12};
  int size = 6;
  int preOrderIndex = 0;
  int inOrderStart = 0;
  int inOrderEnd = size-1;
  map<int,int> valueToIndex;
  createMapping(inOrder,size,valueToIndex);
  
  Node* root = constructTreeFromPreAndInorderTraversal(preOrder,inOrder,preOrderIndex,inOrderStart,inOrderEnd,size, valueToIndex);
  cout << "Pritning Tree: " <<endl;
  levelOrderTraversalLevel(root);
 return 0;
}