//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
        if(s.size() & 1) return -1;
      stack<char> st;
        int count = 0;
        for(auto i:s){
            if(i == '{'){
                st.push(i);
            }
            else{
                if(st.size() != 0 && st.top() == '{'){
                    st.pop();
                }
                else{
                    st.push(i);
                }
            }
        }
        
        //stack is still non empty , let count reversal
        while(!st.empty()){
            char first = st.top();
            st.pop();
            char second = st.top();
            st.pop();
            if(first == second){
                count+=1;
            }
            else{
                count+=2;
            }
            
        }

        return count;
}