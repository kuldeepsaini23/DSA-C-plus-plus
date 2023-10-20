#include<iostream>
using namespace std;

//* Number of Dice rolls with target
int numRollsToTarget(int n, int k, int target) {
        //Base Case
        if(n==0 && target !=0) return 0;
        if(n==0 && target==0) return 1;
        if(target<0) return 0;
        if(n!=0 && target==0) return 0;

        //Processing (solving for one case)
        int ans = 0;
        for(int i = 0; i<=k; i++){
            ans = ans + numRollsToTarget(n-1, k , target - i);
        }
        return ans;
    }
 
int main(){
  int n = 1, k = 6, target = 3;
  cout<<numRollsToTarget(n,k,target);
      
 return 0;
}