#include<iostream>
#include<vector>
using namespace std;
 
void selectionSort(vector<int> &v){
  int n = v.size();
  for (int i = 0; i < n-1; i++)
  {
    int minIndex = i;//ith element is the smallest element
    for (int j = i+1; j < n; j++)
    {
      /* code */
      if(v[j]<v[minIndex]){
        minIndex = j;
      }
    }
     swap(v[i],v[minIndex]);
  }
  
}
 
int main(){
 vector<int> v = {-1,5,4,3,2,1};
 selectionSort(v);
 for (int i = 0; i < v.size(); i++)
 {
  /* code */
  cout<<v[i]<<" ";
 }
 
      
 return 0;
}