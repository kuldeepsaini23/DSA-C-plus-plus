#include<iostream>
#include<unordered_map>
using namespace std;

//* Unorderd Map
 
int main(){
  //creation
  unordered_map<string,int> mapping;


  pair<string,int> p =make_pair("love",25);
  pair<string,int> q("kuldeep",26);
  pair<string,int> r;
  r.first = "arun";
  r.second = 21;

  //insertion
  mapping.insert(p);
  mapping.insert(q);
  mapping.insert(r);
  //insert 
  mapping["Hello"] = 22;

  cout << "Size of the map is: "<< mapping.size() << endl;

  //Access
  cout << mapping.at("love") << endl;
  cout << mapping["kuldeep"] << endl;

  //searching
  cout << mapping.count("love") << endl;

  if(mapping.find("babbar") != mapping.end()){
    cout << "Found"<<endl;
  }
  else{
    cout << "NOT FOUND" << endl;
  }

  cout << "Size of map: " << mapping.size() << endl;
  cout << mapping["kumar"] << endl;

  cout << "Size of map: " << mapping.size() << endl;
      
 return 0;
}