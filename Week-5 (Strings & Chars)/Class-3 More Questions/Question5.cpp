#include<iostream>
#include<vector>
using namespace std;

//* Number of laser beam in the bank
int numberOfBeams(vector<string>& bank) {
        int prevCount = 0, currCount =0;
        int ans = 0;
        for(auto str:bank){
            currCount = 0;
            for(auto ch:str){
                if(ch=='1'){
                    currCount++;
                }
            }
            if(currCount>0){
                ans+=prevCount*currCount;
                prevCount = currCount;        
            }
           
        }  
        return ans; 
    }
 
int main(){
    vector<string> bank = {"0010101", "0000000", "0010100", "001000"};
    cout<<numberOfBeams(bank);
      
 return 0;
}