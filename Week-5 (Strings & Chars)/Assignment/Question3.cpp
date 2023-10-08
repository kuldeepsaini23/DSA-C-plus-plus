#include<iostream>
#include<vector>
using namespace std;

//* Longest Common Prefix
string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i =0;
        while(true){
            char curr_ch = 0;
            for(auto s:strs){
                if(curr_ch==0){
                    curr_ch = s[i];
                }else if( s[i] != curr_ch){
                    curr_ch = 0;
                    break;
                }
            }
            if(curr_ch==0){
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }
 
int main(){
//  vector<string> s = {"flower","flight","flow"};

 vector<string> s = {"dog","flight","flow"};
 cout<<longestCommonPrefix(s);
      
 return 0;
}