#include<iostream>
#include<vector>
#include<algorithm>
#include <typeinfo>
using namespace std;
 
 
int main(){
  vector<int> v = {1,1,2,2,2,3,4};

  auto lb = lower_bound(v.begin(),v.end(),2);

  cout << typeid(lb).name() << endl;
  cout<<*lb<<endl;
  cout<<"Index: "<<lb - v.begin()<<endl;

  auto ub = upper_bound(v.begin(),v.end(),2);   
  cout<<*ub<<endl;
  cout<<"Index: "<<ub - v.begin()<<endl;

 return 0;
}