#include<iostream>
#include<queue>
using namespace std;

//* generic tree
class GenricTree{
  public:
  int data;
  int children_count;
  GenricTree**children;

  GenricTree(int value){
    this->data = value;
    this->children_count = 0;
    this->children = NULL;
  }
};

//* Making Genric Tree
GenricTree* takeInput(){
  int data,count;
  cout << "Enter root data: ";
  cin>>data;
  cout << " Enter Children count for "<< data << " node: ";
  cin>>count;
  GenricTree* root = new GenricTree(data);
  root->children_count = count;

  root->children = new GenricTree*[count];//array to store links to childre

  for (int i = 0; i < count; i++)
  {
    /* code */
    root->children[i] = takeInput();
  }
  return root;
}

//* Level Order
void levelOrderPrint(GenricTree* root){
  queue<GenricTree*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    auto temp = q.front();
    q.pop();

    if(temp == NULL){
      cout << endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
    else{
      cout << temp->data << " ";

      for (int i = 0; i < temp->children_count; i++)
      {
        /* code */
        if(temp->children[i]){
          q.push(temp->children[i]);
        }
      }
    }
  }
}

int main(){
  GenricTree* root = takeInput();
  levelOrderPrint(root);
      
 return 0;
}