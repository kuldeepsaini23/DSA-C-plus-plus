#include<iostream>
#include<vector>
using namespace std;

//* Merge Sort (lakshay's Bhaiya)
void merge(vector<int>&v, vector<int> &temp, int start,int mid, int end){
        int i = start;//Left Array starting
        int j = mid+1;//Right Array Starting

        //Merged Array is Temp i.e., from start to end
        int k = start;

        while(i <= mid && j <= end){
            if(v[i]<=v[j]){
                temp[k++] = v[i++];
            }else{
                temp[k++] = v[j++];
            }
        }

        //Handle Remaining elements in case of diff array size
        while(i<=mid){
            temp[k++] = v[i++];
        }

        while(j<=end){
            temp[k++] = v[j++];
        }

        //Let's copy Temp to original array
        while(start<=end){
            v[start] = temp[start];
            start++;
        }
    }

    void mergeSort(vector<int>&v, vector<int>& temp,  int start, int end){
        //Base Case
        if(start>= end) return;
        
        int mid = (start + end)/2;

        //divide
        mergeSort(v, temp, start, mid);
        mergeSort(v, temp, mid+1, end);

        //conquor(i.e, Merge)
        merge(v, temp, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int>temp(nums.size(),0);
        mergeSort(nums, temp,0,nums.size()-1);
        return nums;
    }
 
int main(){
  vector<int> arr = {2,33,6,2,7,3};
  vector<int> nums = sortArray(arr);
  for(auto el:nums){
    cout<<el<<" ";
  }
  cout<<endl;
      
 return 0;
}