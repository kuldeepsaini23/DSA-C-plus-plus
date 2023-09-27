#include<iostream>
#include<string.h>
using namespace std;
 
//*1. Length of Characters
int findLength(char ch[],int size){
  int len = 0;
  // for (int i = 0; i < size; i++)
  // {
  //   /* code */
  //   if(ch[i]=='\0'){
  //     break;
  //   }else{
  //     len++;
  //   }
  // }
  // return len;

  int index = 0;
  while(ch[index]!='\0'){
    index++;
  }
  return index;
}

//* 2. Reverse String
void revrseString(char ch[], int n){
  int i=0;
  int j = n-1;

  while(i<=j){
    swap(ch[i],ch[j]);
    i++;
    j--;
  }

  cout<<ch<<endl;
}

//* 3. Covert to Upper Case
void convertToUpperCase(char ch[],int n){
  int index = 0;
  while(ch[index]!='\0'){
    char currCharacter = ch[index];
    //check if it is a lower case character 
    if(currCharacter>='a' && currCharacter<='z'){
      //convert to upper case
      ch[index] = currCharacter - 'a' + 'A';//can also do -32
    }
    index++;
  }
} 

//* 4. Covert to Lower Case
void convertToLowerCase(char ch[],int n){
  int index = 0;
  while(ch[index]!='\0'){
    char currCharacter = ch[index];
    //check if it is a Upper case character 
    if(currCharacter>='A' && currCharacter<='Z'){
      //convert to upper case
      ch[index] = currCharacter + 'a' - 'A';//can also do +32
    }
    index++;
  }
} 


//* 5. Replace Character
void replaceCharacter(char ch[],int n){
  int index = 0;
  while(ch[index]!='\0'){
    char currCharacter = ch[index];
    //check if it is a @ character 
    if(currCharacter=='@'){
      //convert to upper case
      ch[index] = ' ';//can also do +32
    }
    index++;
  }
} 

bool checkPalindrome(char ch[], int n){
  int len = strlen(ch);
  int s = 0;
  int e = len-1;
  while(s<=e){
    if(ch[s]!=ch[e]){
      return false;
    }
    s++;
    e--;
  }
  return true;
}


 
int main(){
 //! char Array and String 
 //*Creating Char Array
//  char ch[10];
  //* taking Input
  // cin>>ch;

  //*Printing Char Array
  // cout<<ch<<endl;
 
 //* Null character
  // char ch[10];
  // cin>>ch;
  // for (int i = 0; i < 10; i++)
  // {
  //   /* code */
  //   cout<<"At Index "<<i<<" "<<ch[i]<<endl;
  // }

  // char temp = ch[6];
  // int value = (int)temp;
  // cout<<"Printng integer value: "<<value<<endl;

  //* Delimeter(Space, enter and tab will stop input)
  // char ch[100];
  // cin>>ch;
  // cout<<ch<<endl;

  //* getline() function
  // char ch[100];
  // cin.getline(ch,100);
  // cout<<ch<<endl;

  //!QUESTIONS
  //* 1. Length of Characters
  // char ch[100];
  // cin>>ch;
  // cin.getline(ch,100);

  // int len = findLength(ch,100);
  // cout<<"Lenght of String: "<<len<<endl;
    //TODO: Inbuild Function
    // cout<<"using Inbuild Length Function"<<strlen(ch);

  //* 2. Reverse String
  // char ch[100];
  // cin.getline(ch,100);
  // cout<<ch<<endl;
  // int len = findLength(ch,100);
  // revrseString(ch,len);
  // cout<<ch<<endl;

  //* 3. Covert to Upper Case
  // char ch[100];
  // cin.getline(ch,100);
  // cout<<"Before: "<<ch<<endl;
  // convertToUpperCase(ch,100);
  // cout<<"After: "<<ch<<endl;

  //* 4. Covert to Lower Case
  // char ch[100];
  // cin.getline(ch,100);
  // cout<<"Before: "<<ch<<endl;
  // convertToLowerCase(ch,100);
  // cout<<"After: "<<ch<<endl;

  //* 5. Replace Character
  // char ch[100];
  // cin.getline(ch,100);
  // cout<<"Before: "<<ch<<endl;
  // replaceCharacter(ch,100);
  // cout<<"After: "<<ch<<endl;
  
  //* 6. Check Palindrome
  // char ch[100];
  // cin.getline(ch,100);
  
  // bool result = checkPalindrome(ch,100);
  // if(result){
  //   cout<<"Palindrome"<<endl;
  // }else{
  //   cout<<"Not Palindrome"<<endl;
  // }
      
  //! Strings

  //*creation
  // string name;

  //*input
  // cin>>name;
  // getline(cin,name);

  //*output
  // cout<<name<<endl;

  //* Printing First Charcter
  // cout<<name[0]<<endl;
  // int index = 0;
  // while(name[index]!='\0'){
  //   cout<<name[index]<<endl;
  //   index++;
  // }
  // cout<<"Printing null Character"<<name[6]<<endl;
  // int value = (int)name[6];

  // cout<<"Value: "<<value<<endl;

  //! predefined String Functions
  // string name;
  // cin>>name;
  // getline(cin,name);

  //* 1. Length
  // cout<<name.length()<<endl;

  //* 2. String is empty or not 
  // string temp = "";
  // cout<<name.empty()<<endl;
  // cout<<temp.empty()<<endl;

  //* 3. At function
  // cout<<name.at(0)<<endl;

  //* 4. Front(first) and Back(last)
  // cout<<name.front()<<endl;
  // cout<<name.back()<<endl;

  //* 5. Append(Concat two strings)
  // string str1 = "Love";
  // string str2 = "Babbar";
  // cout<<"Before Appending"<<endl;
  // cout<<str1<<endl;
  // cout<<str2<<endl;
  // str1.append(str2);
  // cout<<"After Appending"<<endl;
  // cout<<str1<<endl;
  // cout<<str2<<endl;

  //* 6. Erase
  // string desc = "This is a Car";
  // desc.erase(4,3);
  // cout<<desc<<endl;

  //* 7. Insert
  // string desc = "Kuldeep Saini";
  // desc.insert(8,"Singh ");
  // cout<<desc<<endl;

  //* 8. push_back and pop_back
  // string desc = "Kuldeep Saini";
  // desc.push_back('s');
  // cout<<desc<<endl;
  // desc.pop_back();
  // cout<<desc<<endl;

  //* 9. Find
  // string desc = "Kuldeep Saini";
  // string str2 = "deep";
  // int index = desc.find(str2);
  // cout<<index<<endl;

  //* 10. If Strings are equal
  // string str1 = "Kuldeep";
  // string str2 = "Kuldeep";
  // if(str1.compare(str2)==0){
  //   cout<<"Strings are equal"<<endl;
  // }else{
  //   cout<<"Strings are not equal"<<endl;
  // }

  //* 11. Substring
  // string str1 = "Kuldeep";
  // string str2 = str1.substr(2,4);
  // cout<<str2<<endl;
  

  char ch[5];

  cin>>ch;

  cout<<ch<<endl;
  int size = sizeof(ch)/sizeof(char);
  cout<<"Size of Array: "<<size<<endl;
  cout<<"Printing through loop: "<<endl;
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<ch[i]<<" ";
  }
  
 return 0;
}