#include<iostream>
#include<vector>
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

//! Class-3
void storeString(TrieNode* root, vector<string> &ans, string &input, string prefix){
  //Base Case
  if(root->isTerminal == true){
    //ans store
    ans.push_back(prefix + input);
    // No return because loop 26 tak hi hai
  }
  for (char ch = 'a'; ch <= 'z'; ch++)
  {
    /* code */
    int index = ch - 'a';
    TrieNode* next = root->children[index];
    if(next != NULL){
      //Child present
      input.push_back(ch);
      //Receusion
      storeString(next, ans, input,prefix);
      //backtracking
      input.pop_back();
    }
    else{
      //Child Absent
      return;
    }
  }
}

void findPrefixString(TrieNode* root, string input, vector<string> &ans, string prefix){
  //Base Case
  if(input.length() == 0){
    TrieNode* lastchar = root;
    storeString(lastchar,ans,input,prefix);
    return;
  }
  char ch = input[0];
  int index = ch - 'a';
  TrieNode* child;
  if(root->children[index] != NULL){
    //Child Present
    child = root->children[index];
  }
  else{
    //Absent
    return;
  }

  //Recrusive Call
  findPrefixString(child, input.substr(1), ans,prefix);
}

vector<vector<string>> getSuggestion(TrieNode* root, string input){

  vector<vector<string>> output;
  TrieNode* prev = root;
  string inputHelper = "";
  for (int i = 0; i < input.length(); i++)
  {
    /* code */
    char lastChar = input[i];
    int index = lastChar - 'a';
    TrieNode* curr = prev->children[index];
    if(curr != NULL){
      //Child Present 
      vector<string> nicheKaAns;
      inputHelper.push_back(lastChar);
      storeString(curr,nicheKaAns,inputHelper,"");
      output.push_back(nicheKaAns);
      prev = curr; //! Important Step
    }
    else{
      //Child Absent
      break;
    }
  }
  return output;
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

  //! Class-3
  vector<vector<string>> ans = getSuggestion(root,"loa");
  for(int i = 0; i<ans.size(); i++){
    cout << i+1 <<"->";
    for (auto str:ans[i])
    {
      /* code */
      cout << str << ", ";
    }
    cout << endl;
  }
 return 0;
}