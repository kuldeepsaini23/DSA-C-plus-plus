#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Add Two number Represting Array
vector<int> calc_Sum(int *a,int n,int *b,int m){
  int carry = 0;
  vector<int> ans;
  int i = n-1;
  int j = m-1;
  while(i>=0 && j >=0){
    int sum = a[i] + b[j] + carry;
    int digit = sum%10;
    ans.push_back(digit);
    carry = sum/10;
    i--,j--;
  }

  while(i>=0){
    int sum = a[i] + 0 + carry;
    int digit = sum%10;
    ans.push_back(digit);
    carry = sum/10;
    i--;
  }

  while(j >=0){
    int sum = 0 + b[j] + carry;
    int digit = sum%10;
    ans.push_back(digit);
    carry = sum/10;
    j--;
  }

  if(carry){
    ans.push_back(carry);
  }

  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
 int a[] = {9,5,4,9};
 int n = sizeof(a)/sizeof(int);

 int b[] = {2,1,4};
 int m = sizeof(b)/sizeof(int);

 vector<int> v = calc_Sum(a,n,b,m);
 for (int i = 0; i < v.size(); i++)
 {
  /* code */
  cout<<v[i]<<" ";
 }
 
      
 return 0;
}