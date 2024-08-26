#include<iostream>
#include<queue>
using namespace std;

//* Binary Search Tree
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
 
//* Inserting into BST
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

//* Create BST
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


//* Level Order code
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

//* PreOrder
void preOrder(Node* root){
  //Base Case
  if(root == NULL){
    return;
  }

  cout << root->data<<" ";

  preOrder(root->left);
  preOrder(root->right);
}

//* InOrder(Always sorted incase of BST)
void inOrder(Node* root){
  //Base Case
  if(root == NULL){
    return;
  }
  inOrder(root->left);
  cout << root->data<<" ";
  inOrder(root->right);
}

//* PostOrder
void postOrder(Node* root){
  //Base Case
  if(root == NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  
  cout << root->data <<" ";
}

//! Min Value
Node* minValue(Node* root){
  //Base Case
  if(root == NULL){
    return NULL;
  }

  Node* temp = root;

  while(temp->left != NULL){
    temp = temp->left;
  }
  return temp;
}


//! Max Value
Node* maxValue(Node* root){
  //Base Case
  if(root == NULL){
    return NULL;
  }

  Node* temp = root;

  while(temp->right != NULL){
    temp = temp->right;
  }
  return temp;
}

//! Search in BST
bool searchInBST(Node* root, int target){
  //Base Case
  if(root == NULL){
    return false;
  }

  // 1 case me solve kr rha hu
  if(root->data == target){
    return true;
  }

  //* change code

  bool leftAns , rightAns;
  leftAns = rightAns = false;
  // Recrusion work
  if(root->data > target){
    leftAns = searchInBST(root->left, target);
  }
  else{
    rightAns = searchInBST(root->right, target);
  }

  return leftAns || rightAns;

}

//! Delete a node in BST
Node* deleteFromtBST(Node* root, int target){
  //target ko dhundo
  //target ko delete karo

  if(root == NULL){
    return NULL;
  }

  if(root->data == target){
    //ab delete karege
    //4 cases

    //* 1 Case: Leaf Node
    if(root->left == NULL && root->right == NULL){
      delete root;
      return NULL;
    }
    else if(root->left != NULL && root->right == NULL){
    //*2 Case: left non null and right null
      Node* childSubTree = root->left;
      delete root;
      return childSubTree;
    }
    else if(root->left == NULL && root->right != NULL){
      //*3 Case: left null and right non null
      Node* childSubTree = root->right;
      delete root;
      return childSubTree;
    }
    else{
      //* Case 4: Left and Right Both NON NULL
      Node* maxi = maxValue(root->left);
      //Replacment
      root->data = maxi->data;
      //Delete actual maxi
      root->left = deleteFromtBST(root->left, maxi->data);
      return root;

      // OR
      // Node* mini = minValue(root->right);
      // root->data = mini->data;
      // root->right = deleteFromtBST(root->right, mini->data);
      // return root;
    }
  }
  else if(root->data > target){
    //left me chalo

    root->left =  deleteFromtBST(root->left, target);
  }
  else{
    //right me jao
    root->right =  deleteFromtBST(root->right, target);
  }

  return root;
}


int main(){
  Node* root = NULL;
  createBST(root);
  cout<< "Printing level Order: "<< endl;
  levelOrder(root);

  cout << endl << "PreOrder: ";
  preOrder(root);

  cout << endl << "InOrder: ";
  inOrder(root);

  cout << endl << "PostOrder: ";
  postOrder(root);

  //* Min value
  cout << endl << "The Min value of Node is: ";

  Node* minNode = minValue(root);
  if(minNode == NULL){
     cout << "NO MIN VALUE EXIST" << endl;
  }
  else{
    cout << "Min value is: "<< minNode->data << endl;
  }

  //* Max value
  Node* maxNode = maxValue(root);
  if(maxNode == NULL){
     cout << "NO MAX VALUE EXIST" << endl;
  }
  else{
    cout << "Max value is: "<< maxNode->data << endl;
  }
  
  //* seacrh in BST
  int searchValue;
  cout << "ENTER the Search Value: "<<endl;
  cin>>searchValue;
  while(searchValue != -1){
    bool ans = searchInBST(root, searchValue);
    if(ans){
      cout << "FOUND"<<endl;
    }
    else{
      cout << "NOT FOUND" << endl;
    }
    cout << "ENTER the Search Value again: "<<endl;
    cin>>searchValue;
  }

  //! Delete in BST
  // int target;
  // cout << "Enter the value of Target: "<<endl;
  // cin>>target;
  // while(target != -1){
  //   root = deleteFromtBST(root, target);
  //   cout << endl<< "Printing Level order Traversal: "<<endl;
  //   levelOrder(root);
  //   cout << "Enter the value of target: "<<endl;
  //   cin>> target;
  // }

      
 return 0;
}
