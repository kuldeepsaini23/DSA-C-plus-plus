#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//* Implement Min Stack
class MinStack {
public:
    vector<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            //It means, i am inserting first Element 
            pair<int,int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else{
            //If stack is not empty
            pair<int,int> p;
            p.first = val;
            int purnaMin = st.back().second;
            p.second = min(purnaMin, val);
            st.push_back(p);
        }
    }
    
    void pop() {
        if(st.size()!=0){
            st.pop_back();
        }
        
    }
    
    int top() {
        // pair <int,int> rightMostPair = st.back();
        // return rightMostPair.first;
        return st[st.size()-1].first;
    }
    
    int getMin() {
        // pair <int,int> rightMostPair = st.back();
        // return rightMostPair.second;
        return st[st.size()-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main(){
 
      
 return 0;
}