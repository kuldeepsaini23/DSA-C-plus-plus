#include<iostream>
#include<vector>
using namespace std;

//! In place Merge Sort
void mergeInplace(vector<int> &v, int start, int mid, int end){
  int total_length = end - start + 1;
  int gap = total_length/2 + total_length%2;

  while(gap>0){
    int i = start, j = start + gap;
    while(j <= end){
      if(v[i] > v[j]){
        swap(v[i], v[j]);
      }
      ++i, ++j;
    } 
    gap = gap <= 1 ? 0 : (gap/2) + (gap%2); 
  }
}

void mergeSort(vector<int> &v, int start, int end){
  //base case 
  if(start >= end){
    return;
  }

  int mid = start + (end-start)/2;
  mergeSort(v, start, mid);
  mergeSort(v, mid+1, end);
  mergeInplace(v, start, mid, end);
}

 
int main(){
  vector<int> v = {3,21,4,1,5,2};
  mergeSort(v,0,v.size()-1);
  for(auto i:v){
    cout<< i << " ";
  }
      
 return 0;
}