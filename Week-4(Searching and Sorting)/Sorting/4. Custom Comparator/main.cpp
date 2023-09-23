#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Printing 2-D Vector
void print(vector<vector<int>> &v){
  for(int i=0;i<v.size();i++){
    vector<int>&temp = v[i];
    cout<<temp[0]<<" "<<temp[1]<<endl;
  }
}

bool myComp(int &a, int &b){
  cout<<"Comparing "<<a<<" and "<<b<<endl;
  // return a<b;//increasing order
  return a>b;//deceased order
}

bool myComp1stIndex(vector<int>&a, vector<int>&b){
  // return a[1]>b[1];//desc
  return a[1]<b[1];//asc
}


int main(){
  // vector<int> v = {44,55,22,11,33};
  //sort(v.begin(),v.end());
  // sort(v.begin(),v.end(),myComp);
  // for(int i=0;i<v.size();i++){
  //   cout<<v[i]<<" ";
  // }
 
  //* Vector of vector
  vector<vector<int>> v;
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    /* code */
    cout<<"Enter the numbers: "<<endl;
    int a,b;
    cin>>a>>b;
    vector<int> temp;
    temp.push_back(a);  
    temp.push_back(b);
    v.push_back(temp);
  }
  cout<<"Here are the Values: "<<endl;
  print(v);
  cout<<"Before custom Comparator: "<<endl;
  print(v);
  sort(v.begin(),v.end(),myComp1stIndex);
  cout<<"After Sorting: "<<endl;
  print(v);

 return 0;
}