#include<iostream>
#include<vector>
using namespace std;
 
void bubbleSort(vector<int> &v){
  int n = v.size();
  for (int i = 0; i < n-1; i++)
  {
    /* code */
    for (int j = 0; j < n-i-1; j++)
    {
      /* code */
      if(v[j]>v[j+1]){
        swap(v[j],v[j+1]);
      }
    }
  }
  
}
 
int main(){
 vector<int> v = {5,4,3,2,1};
 bubbleSort(v);
 for (int i = 0; i < v.size(); i++)
 {
  /* code */
  cout<<v[i]<<" ";
 }
 
      
 return 0;
}