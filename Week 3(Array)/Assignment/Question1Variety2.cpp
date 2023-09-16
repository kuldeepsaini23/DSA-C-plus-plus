#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

//* Two Sum Leet code
vector<int> twoSum(vector<int>& nums, int target) {
  vector<int> ans;
  // int n = nums.size()
  //--O(n^2)
  // for(int i = 0;i<n;i++){
  //     for(int j = i+1; j<n;j++){
  //         if(nums[i]+nums[j]==target) {
  //             ans.push_back(i);
  //             ans.push_back(j);
  //             break;
  //         }
  //     }
  //}

  //*-->O(nlogn) Hashing
  cout<<nums.size()<<endl;
  unordered_map<int,int> hash;
    for(int i=0;i<nums.size();i++){
    int more = target - nums[i];
    if(hash.find(more) != hash.end()){
      ans.push_back(hash[more]);
      ans.push_back(i);
      break;
    }
    cout<<"Index"<<i<<endl;
    hash[nums[i]] = i;
    }
    for (auto const &pair: hash) {
        cout << "{" << pair.first << ": " << pair.second << "}\n";
      }
  return ans;        

}

 
int main(){
 vector<int> v{3,2,4};
 int target = 6;
 vector<int> ans =  twoSum(v,target);

 for (int i = 0; i < ans.size(); i++)
 {
  /* code */
  cout<<ans[i]<<" ";
 }
 cout<<endl;
      
 return 0;
}