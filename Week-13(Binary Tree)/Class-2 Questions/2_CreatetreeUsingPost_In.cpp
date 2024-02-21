#include<iostream>
#include<queue>
#include<map>
using namespace std;

//! Creating Binary Tree using PostOrder and Inorder
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
Node* constructTreeFromPostAndInorderTraversal(int postOrder[], int inOrder[], int &postIndex, int inOrderStart, int inOrderEnd, int size, map<int,int> &valueToIndex){
  //Base Case
  if(postIndex < 0 || inOrderStart > inOrderEnd){
    return NULL;
  }

  //  1 case me solve krta hu
  int element = postOrder[postIndex];
  postIndex--;

  Node* root = new Node(element);
  //element ssearch krna padegaa inorder  me jakes
  //* Through Linear search and Bianry Search
  // int position = searchInorder(inOrder, size, element);
  //*using Map for searching beacsue it takes O(1) to search
  int position = valueToIndex[element];

  //Constructing Right subtree
  root->right = constructTreeFromPostAndInorderTraversal(postOrder, inOrder, postIndex, position+1, inOrderEnd, size,valueToIndex); 

  //Constructing left subtree
  root->left = constructTreeFromPostAndInorderTraversal(postOrder, inOrder, postIndex, inOrderStart, position-1, size,valueToIndex);

  return root;
}

int main(){
  int inOrder[] = {8,14,6,2,10,4};
  int postOrder[] = {8,6,14,4,10,2};
  int size = 6;
  int postOrderIndex = size-1;
  int inOrderStart = 0;
  int inOrderEnd = size-1;
  map<int,int> valueToIndex;
  createMapping(inOrder,size,valueToIndex);
  
  Node* root = constructTreeFromPostAndInorderTraversal(postOrder,inOrder,postOrderIndex,inOrderStart,inOrderEnd,size, valueToIndex);
  cout << "Pritning Tree: " <<endl;
  levelOrderTraversalLevel(root);
 return 0;
}