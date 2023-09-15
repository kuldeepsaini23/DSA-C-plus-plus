#include<iostream>
#include<vector>
using namespace std;
//* Sort Colors

void sortColors(vector<int>& nums) {
        //* sort(nums.begin(),nums.end());
        //* Counting Method
        // int zeros, ones, twos;
        //     zeros=ones=twos=0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==0){
        //         zeros++;
        //     }else if(nums[i]==1){
        //         ones++;
        //     }else{
        //         twos++;
        //     }
        // }

        //spread
        // int i=0;
        // while(zeros--){
        //     nums[i] = 0;
        //     i++;
        // }

        //  while(ones--){
        //     nums[i] = 1;
        //     i++;
        // }

        //  while(twos--){
        //     nums[i] = 2;
        //     i++;
        // }
        

        //* 3. Pointer approach
        int l=0, m=0, h= nums.size()-1;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[m], nums[l]);
                m++, l++;
            }else if(nums[m]==1){
                m++;
            }else{
                swap(nums[m], nums[h]);
                h--;
            }
        }
}
 
int main(){
 vector<int> v{2,0,2,1,1,0};
 sortColors(v);
 for (int i = 0; i < v.size(); i++)
 {
  /* code */
  cout<<v[i]<<" ";
 }
      
 return 0;
}