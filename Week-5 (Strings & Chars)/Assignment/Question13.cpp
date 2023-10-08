#include<iostream>
#include<limits.h>
using namespace std;

//* Reorganize String
 string reorganizeString(string s) {
        // int posi = 0;
        // for(int i=1;i<s.size();i++){
        //     if(s[i] != s[i-1]){
        //         swap(s[i],s[posi]);
        //         posi=i;
        //     }
        //     cout<<s<<endl;
        // }
        
        // for(int i=1;i<s.size();i++){
        //     if(s[i] == s[i-1]){
        //         return "";
        //     }
        // }
        // return s;


        int hash[26] = {0};

        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
        }

        //finding most frequent chacter
        char most_freq_char;
        int max_freq = INT_MIN;
        for(int i=0; i<26; i++){
            if(hash[i]>max_freq){
                max_freq = hash[i];
                most_freq_char = i + 'a';
            }
        }

        int index = 0;
        while(max_freq>0 && index<s.size()){
            s[index] = most_freq_char;
            max_freq--;
            index+=2;
            
        }

        if(max_freq!=0){
            return "";
        }

        hash[most_freq_char - 'a'] = 0;

        //let's place the rest of the characters
        // index = 1;
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index = index >= s.size() ? 1 :index;
                s[index] = i + 'a';
                hash[i]--;
                index+=2;
            }
        }

        return s;
    }
 
int main(){
  string s = "aab";
  cout<<reorganizeString(s);
      
 return 0;
}