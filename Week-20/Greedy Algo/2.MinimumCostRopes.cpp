//* Minimum Cost of ropes

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long>, greater<long long>> minHeap;
        
        //insert all elements 
        for(int i=0; i<n;i++){
            long long val = arr[i];
            minHeap.push(val);
        }
        
        long long cost = 0;
        while(minHeap.size() > 1){
            long long a = minHeap.top();
            minHeap.pop();
            long long b = minHeap.top();
            minHeap.pop();
            cost+=a+b;
            long long sum = a+b;
            minHeap.push(sum);
        }
        
        return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends