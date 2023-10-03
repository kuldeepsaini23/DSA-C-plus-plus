#include<iostream>
#include<vector>
using namespace std;

//*Minimum Amount of Time to Collect Garbage
int garbageCollection(vector<string>& garbage, vector<int>& travel) {
  int pickP=0;
  int pickM=0;
  int pickG=0;

  int travelP=0;
  int travelM =0;
  int travelG=0;

  int lastP=0;
  int lastM=0;
  int lastG=0;

  //calculate pick time and last P G M
  for (int i = 0; i < garbage.size(); i++)
  {
    /* code */
    string curr = garbage[i];
    cout<<"This is the garbage char "<<curr<<endl;
    for (int j = 0; j < curr.length(); j++)
    {
      /* code */
      char ch = curr[j];
      if(ch=='P'){
        pickP++;
        lastP = i;
      }
      else if(ch=='G'){
        pickG++;
        lastG = i;
      }
      else if(ch == 'M'){
        pickM++;
        lastM = i;
      }
    }

    cout<<lastP<<" "<<lastG<<" "<<lastM<<" "<<endl;
    
    //calcuate travel time
    for (int i = 0; i < lastP; i++)
    {
      /* code */
      travelP+= travel[i];
    }
    
    for (int i = 0; i < lastG; i++)
    {
      /* code */
      travelG+= travel[i];
    }

    for (int i = 0; i < lastM; i++)
    {
      /* code */
      travelM+= travel[i];
    }

    int ans = (travelP + pickP) + (travelG + pickG) + (travelM + pickM);
    return ans;

  }
  
        
}


 
int main(){
 vector<string> garbage = {"G","P","PG","GG"};
 vector<int>travel = {2,4,3};

 cout<<garbageCollection(garbage,travel);
      
 return 0;
}