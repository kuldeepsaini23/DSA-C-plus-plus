#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//* Common Elements in 3 Sorted Array
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
  vector<int> ans;
  int i,j,k;
  i=j=k=0;

  while(i<n1 && j<n2 && k<n3){
    if(A[i]==B[j] && B[j]==C[k]){
      ans.push_back(A[i]);
      i++,j++,k++;
    }else if(A[i]<B[j]){
      i++;
    }else if(B[j]<C[k]){
      j++;
    }else{
      k++;
    }
  }
  
  for (int i = 0; i < ans.size(); i++)
  {
    /* code */
    cout<<ans[i]<<" ";
  }
  return ans;
}

//* The above method will fail we have similar elemnts in an array so to solve this we will use--> SETS
vector <int> commonElementsWithSet (int A[], int B[], int C[], int n1, int n2, int n3){
  vector<int> ans;
  set<int> st;
  int i,j,k;
  i=j=k=0;

  while(i<n1 && j<n2 && k<n3){
    if(A[i]==B[j] && B[j]==C[k]){
      st.insert(A[i]);
      i++,j++,k++;
    }else if(A[i]<B[j]){
      i++;
    }else if(B[j]<C[k]){
      j++;
    }else{
      k++;
    }
  }
  
  for (auto i:st)
  {
    /* code */
    ans.push_back(i);
  }

  for (int i = 0; i < ans.size(); i++)
  {
    /* code */
    cout<<ans[i]<<" ";
  }

  return ans;
}
 
int main(){
 int A[] = {1,5,10,20,40,80,80};
 int n1 = sizeof(A)/sizeof(int); 

 int B[] = {6,7,20,80,80,100};
 int n2 = sizeof(B)/sizeof(int); 

 int C[] = {3,4,15,20,30,70,80,80,120};
 int n3 = sizeof(C)/sizeof(int); 

 commonElements(A,B,C,n1,n2,n3);
  cout<<endl;
 commonElementsWithSet(A,B,C,n1,n2,n3);

 return 0;
}