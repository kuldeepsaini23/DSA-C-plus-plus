#include<iostream>
#include<queue>
using namespace std;
 
//* Keth Greates Element in an Array
int getKthSmallestElement(int arr[], int n, int k){
  priority_queue<int, vector<int>, greater<int>> pq;
  //first k element ko process kro
  for (int i = 0; i < k; i++)
  {
    /* code */
    pq.push(arr[i]);
  }

  //remaining elemnt ko tabhi insert kro jab vo root se bda ho
  for (int i = k; i < n; i++)
  {
    /* code */
    if(arr[i] > pq.top()){
      pq.pop();
      pq.push(arr[i]);
    }
  }
  int ans = pq.top();
  return ans;
}
 
int main(){
  int arr[] = {5,7,8,12,2,9};
  int n = 6;
  int k = 3;

  cout <<"3rd Greatest Number is: "<< getKthSmallestElement(arr,n,k) << endl;

 return 0;
}