#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//* Next Smallest Element
vector<int> nextSmallestElement(int *arr, int size, vector<int> &ans){
  stack<int> st;
  st.push(-1);

  for(int i=size-1; i>=0;i--){
    int curr = arr[i];
    //Answer find kro current ke liye
    while(st.top() >= curr){
      st.pop();
    }
    //Stack ke top ab curr se chota element hh
    ans[i] = st.top();
    st.push(curr);
  }
  return ans;
}

int main(){
  int arr[5] = {8,4,6,2,3};
  int size = 5;
  vector<int> ans(size);
  ans = nextSmallestElement(arr,size,ans);
  for(auto i:ans){
    cout<<i<<" ";
  }
  cout<<endl;
      
 return 0;
}