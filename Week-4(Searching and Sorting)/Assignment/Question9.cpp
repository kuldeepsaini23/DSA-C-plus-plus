#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


//* Paratha-Roti Spoj

bool isPossibleSolution(vector<int>& cooksRanks, int mid, int nP){
  int currP = 0;//Initail cooked parathas

  for (int i = 0; i < cooksRanks.size(); i++)
  {
    /* code */
    int R = cooksRanks[i];
    int prathaNumber=1;
    int timeTaken = 0;

    while(true){
      if(timeTaken + prathaNumber * R <= mid){
        currP++;
        timeTaken+= prathaNumber*R;
        prathaNumber++;
      }else{
        break;
      }
    }

    //R ne kitne prathas Bnaye
    if(currP>=nP){
      return true;
    }
  }
  return false;
}


int minTimeToCompleteOrder(vector<int>& cooksRanks, int nP){
  int s = 0;
  int highestRanker = *max_element(cooksRanks.begin(), cooksRanks.end());
  int e = highestRanker*((nP*(nP+1))/2);
  int ans = -1;

  while(s<=e){
    int mid = s+(e-s)/2;

    if(isPossibleSolution(cooksRanks,mid,nP)){
      ans = mid;
      e = mid-1;
    }else{
      s = mid+1;
    }
  }

  return ans;
}
 
int main(){
  int T; cin>>T;
  while(T--){
    int nP, nC;
    cin>>nP>>nC;
    vector<int> cooksRanks;
    while(nC--){
      int c;
      cin>>c;
      cooksRanks.push_back(c);
    }
    
    cout<<minTimeToCompleteOrder(cooksRanks,nP)<<endl;
  }

 return 0;
}

// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1