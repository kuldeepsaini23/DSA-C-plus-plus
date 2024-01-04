#include<iostream>
using namespace std;
 

class TrieNode{
  public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

  TrieNode(char val){
    this->value = val;
    for(int i=0; i<26; i++){
      children[i] = NULL;
    }
    this->isTerminal = false;
  }
    
};

//insertion
void insertWord(TrieNode* root, string word){
  // cout << "insertion word: "<< root->value << endl;
  //Base Case
  if(word.length() == 0){
    root->isTerminal = true;
    return;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;
  if(root->children[index] != NULL){
    //Present hai toh travel to that Node
    child = root->children[index];
  }
  else{
    //Absent hai toh create kre travel kro
    child = new TrieNode(ch);
    root->children[index] = child;
  }

  //Baki Recrusion krdegaa
  insertWord(child, word.substr(1));
  
}

bool searchWord(TrieNode* root, string word){
  //Base Case
  if(word.length() == 0){
    return root->isTerminal;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;

  if(root->children[index] != NULL){
    //child present hai
    child = root->children[index];
  }
  else{
    //Not found
    return false;
  }

  bool recrusionKaAns = searchWord(child, word.substr(1));
  return recrusionKaAns;
}

//* Delete
void deleteWord(TrieNode* root, string word){
  //Base Case
  if(word.length() == 0){
    root->isTerminal = false;
    return ;
  }

  char ch = word[0];
  int index = ch - 'a';
  TrieNode* child;

  if(root->children[index] != NULL){
    //child present hai
    child = root->children[index];
  }
  else{
    //Not found
    return;
  }

  deleteWord(child, word.substr(1));
}
 
int main(){
  TrieNode* root = new TrieNode('-');
  insertWord(root,"cater");
  insertWord(root,"care");
  insertWord(root,"com");
  insertWord(root,"lover");
  insertWord(root,"loved");
  insertWord(root,"load");
  insertWord(root,"lov");
  insertWord(root,"bat");
  insertWord(root,"cat");
  insertWord(root,"car");

  //* Searching
  string word = "loved";
  bool search = searchWord(root,word);
  if(search){
    cout << word << " Found" << endl;
  }
  else{
    cout << word << " NOT Found" << endl;
  }

  deleteWord(root, word);
  bool searchAgain = searchWord(root,word);
  if(searchAgain){
    cout << word << " Found" << endl;
  }
  else{
    cout << word << " NOT Found" << endl;
  }

      
 return 0;
}