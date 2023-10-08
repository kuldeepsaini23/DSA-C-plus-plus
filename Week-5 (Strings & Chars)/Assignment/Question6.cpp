#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
 
//! Group Anagrams

//* sorting
vector<vector<string>> groupAnagramsWithSorting(vector<string>& strs) {
  map<string,vector<string>>mp;
  for(auto str:strs){
      string s  = str;
      sort(s.begin(),s.end());
      mp[s].push_back(str);
  }
  vector<vector<string>>ans;
  for(auto it=mp.begin(); it!=mp.end(); it++){
      ans.push_back(it->second);
  }
  return ans;
}

//*hashing
  //This a stdl way to declare a array
std::array<int,256> hashed(string s){
  std::array<int,256> hash = {0};
  for(int i =0; i< s.size(); i++){
    hash[s[i]]++;
  }
  return hash;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  map<std::array<int,256>,vector<string>>mp;
  for(auto str:strs){
    mp[hashed(str)].push_back(str);
  }
  vector<vector<string>>ans;
  for(auto it=mp.begin(); it!=mp.end(); it++){
    ans.push_back(it->second);
  }
  return ans;
}




int main(){
  vector<string> s = {"eat","tea","tan","ate","nat","bat"};

  //* Sorting
  // vector<vector<string>> ans = groupAnagramsWithSorting(s);

  //*Hashing
  vector<vector<string>> ans = groupAnagrams(s);

  for (int i = 0; i < ans.size(); i++)
  {
    /* code */
    for (int j = 0; j < ans[i].size(); j++)
    {
      /* code */
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
  
      
 return 0;
}



//  bool isAnagram(string s, string t) {
//         if(s==""||t=="") return false;

//         int freqTable[256] = {0};

//         for(auto ch:s){
//             freqTable[ch]++;
//         }

//         for(auto ch:t){
//             freqTable[ch]--;
//         }

//         for(int i=0; i<256;i++){
//             if(freqTable[i]>0){
//             return false;
//             }
//         }
//         return true;
//     }
// vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> ans;
//         vector<string> tempAns;

//         for(int i=0;i<strs.size()-1;i++){
//             tempAns.clear();
//             if(strs[i] == "0"){
//                 continue;
//             }
//             tempAns.push_back(strs[i]);
//             for(int j = i+1; j<strs.size(); j++){
             
//                 if(isAnagram(strs[i], strs[j] )){   
//                     tempAns.push_back(strs[j]);
//                     strs[j] = "0";
//                 }
                
//             }
            
//             if(tempAns.empty()){
//                 tempAns.push_back(strs[i]);
//                 ans.push_back(tempAns);
//             }else{
//                 ans.push_back(tempAns);
//             }
//         }
//         if(strs[strs.size()-1] != "0"){
//             tempAns.push_back(strs[strs.size()-1]);
//             ans.push_back(tempAns);
//         }
     
//         return ans;