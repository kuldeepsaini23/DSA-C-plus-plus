//* Fractional Knapsack

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int capacity, Item arr[], int n)
    {
        // Your code here
        vector<double> valWtRatio;
        for(int i=0; i<n; i++){
            double ratio = (double)(arr[i].value*1.0)/arr[i].weight;
            // cout << ratio << endl;
            valWtRatio.push_back(ratio);
        }
        
        priority_queue<pair<double,pair<int,int>>> maxi;
        
        
        for(int i=0; i<n; i++){
            maxi.push({valWtRatio[i], {arr[i].value, arr[i].weight }});
        }
        
        //max headp is ready
        double totalVal = 0;
        while(capacity !=0 && !maxi.empty()){
            auto front = maxi.top();
            double ratio = front.first;
            int value = front.second.first;
            int weight = front.second.second;
            maxi.pop();
            
            
            // cout << "Ratio: "<<ratio << ", value: " << value << ", weight: " <<weight <<endl; 
            
            //full insert hoga
            if(capacity >= weight){
                totalVal += value;
                // cout << value << endl;
                capacity = capacity - weight; 
            }
            else{
                //fractional insert hooga
                double valueToInclude = ratio*capacity;
                // cout << valueToInclude << endl;
                totalVal += valueToInclude;
                capacity = 0;
                break;
            }
        }
        
        return totalVal;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends