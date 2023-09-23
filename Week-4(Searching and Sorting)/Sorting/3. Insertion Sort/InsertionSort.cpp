#include<iostream>
#include<vector>
using namespace std;
 
void insertionSort(vector<int> &v){
  int n = v.size();
  for (int i = 1; i < n; i++)
  {
    int key = v[i];
    int j = i-1;

    //*Move elements of v[0..i-1], that are greater than key, to one position ahead of their current position
    while(j>=0 && v[j]> key){
      v[j+1] = v[j];
      j--;
    }
    // v[++j] = key;
    v[j+1] = key;
  }
}
 
int main(){
 vector<int> v = {-1,5,4,3,2,1};
 insertionSort(v);
 for (int i = 0; i < v.size(); i++)
 {
  /* code */
  cout<<v[i]<<" ";
 }
 
 return 0;
}