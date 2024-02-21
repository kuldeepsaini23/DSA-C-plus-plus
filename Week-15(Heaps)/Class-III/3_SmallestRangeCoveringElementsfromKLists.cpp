#include<iostream>
using namespace std;
#include<limits.h>
#include<queue>

class Solution {
public:
    class Info{
    public:
        int data;
        int colIndex;
        int rowIndex;

        Info( int value,int rowNo, int colNo){
        this->data = value;
        this->rowIndex = rowNo;
        this->colIndex = colNo;
        }
    };

    class compare{
    public:
        bool operator()(Info* a, Info* b){
        return a->data > b->data;
        }
    };

    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Info*, vector<Info*> ,compare> pq;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        //process first k elements
        for(int i=0; i < nums.size(); i++){
            int element = nums[i][0];
            int row = i;
            int col = 0;
            Info* temp = new Info(element,row,col);
            pq.push(temp);
            maxi = max(maxi,element);
            mini = min(mini,element);
        }

        int ansStart = mini;
        int ansEnd = maxi;
        //process the remaining element
        while(!pq.empty()){
            Info* topNode = pq.top();
            int topData = topNode->data;
            int topCol = topNode->colIndex;
            int topRow = topNode->rowIndex;
            pq.pop();

            mini = topNode->data;
            //maxi ki value pehele se padi hui comapare for small range
            if((maxi-mini) < (ansEnd - ansStart)){
                //update ans;
                ansStart = mini;
                ansEnd = maxi; 
            }

            //insertion wala step
            if(topCol + 1 < nums[topRow].size()){
                int newElement = nums[topRow][topCol+1];
                maxi = max(maxi,newElement);
                Info* newInfo = new Info(newElement, topRow, topCol+1);
                pq.push(newInfo);
            }
            else{
                //agage koi element nhi hai ksis ek bhi list me then break
                break;
            }
        }
        vector<int> ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    }
};