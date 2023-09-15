#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//* Factorial of Large Numbers
vector<int> factorial(int N){
  vector<int> ans;
  ans.push_back(1);
  int carry = 0;
  for (int i = 2; i <= N; i++)
  {
    /* code */
    for (int j = 0; j < ans.size(); j++)
    {
      /* code */
      int x = ans[j]*i +carry;
      ans[j] = x%10;
      carry = x/10;
    }
    while(carry){
      ans.push_back(carry%10);
      carry/=10;
    }
    carry = 0;
  }

  reverse(ans.begin(),ans.end());

  for (auto i:ans)
  {
    /* code */
    cout<<i<<" ";
  }
  
  return ans;
}


int main(){
 int n;
 cout<<"Enter the value of Number: ";
 cin>>n;

 factorial(n);
      
 return 0;
}