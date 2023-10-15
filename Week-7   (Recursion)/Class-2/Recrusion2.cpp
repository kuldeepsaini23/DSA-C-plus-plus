#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
 
//* Climbing Stairs(Leetcode)
int climbStairs(int n) {
      if(n==0){
          return 1;
      }
      if( n ==1){
          return 1;
      }
      int ans = climbStairs(n-1) + climbStairs(n-2);
      return ans;
}  

//* Fibnoaachi throufh loop
int fib(int n){
  int prev1 = 0;
  int prev2 = 1;
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    /* code */
    ans = prev1+prev2;
    prev1++, prev2++;
  }
  
}

//*Printing Array
void printArray(int arr[], int size, int index){
  //base case
  if(index>=size){
    return;

    cout<<arr[index]<<" ";

    printArray(arr,size,index+1);
  }
}

//*Search in array
bool searchArray(int arr[], int size, int target, int index){
  //base case
  if(index>=size){
    return false;
  }

  if(arr[index]==target){
    return true;
  }
  
  //recrusive call
  bool aageKaAns = searchArray(arr,size,target, index+1);//OR ++index
  return aageKaAns;
  
}


//* Find minimum
void findMin(int arr[], int size, int index, int& mini){
  //base case
  if(index >= size){
    return;
  }

  //processing
  mini = min(mini,arr[index]);

  //Recrusive call
  findMin(arr,size,index+1,mini);
}

//* Find Max
void findMax(int arr[], int size, int index, int& maxi){
  //base case
  if(index >= size){
    return;
  }

  //processing
  maxi = max(maxi,arr[index]);

  //Recrusive call
  findMin(arr,size,index+1,maxi);
}


//*Solve --> Stor even numbers in array into vector
void solve(int arr[], int size, int index, vector<int>&nums){
  //Base Case
  if(index>=size){
    return;
  }

  if(arr[index]%2==0){
    nums.push_back(arr[index]);
  }

  //Recrusive Call
  solve(arr,size, index+1, nums);
}

//*Double
void doubleTheArray(int arr[],int size, int index){
  //Base Case
  if(index>=size){
    return;
  }

  //Processing
  arr[index] = 2*arr[index];

  //Base Case
  doubleTheArray(arr, size, index+1);
}


//* Print Digit
void printDigits(int num, vector<int> &arr){
  //Base case
  if(num==0){
    return;
  }

  //processing
  int digit = num%10;
  //update num
  num /= 10;

  //Recrusive Call
  printDigits(num,arr);

  //processing
  arr.push_back(num);
  // cout<<digit<<endl;
}

int main(){
  //* Climbing Stairs(Leetcode)


  //*Printing Array
  // int arr[] = {1,2,3,4,5};
  // int size = 5;
  // int start = 0;
  // printArray(arr,size,start);
      
  //*Search Array
  // int arr[] = {1,2,3,4,5};
  // int size = 5;
  // int start = 0;
  // searchArray(arr,5,3,0);

  //* Minimum number
  // int arr[] = {1,2,3,4,5};
  // int size = 5;
  // int index = 0;
  // int mini = INT_MAX;
  // findMin(arr,5,index, mini);

  //* MAximum Number
  // int arr[] = {1,2,3,4,5};
  // int size = 5;
  // int index = 0;
  // int maxi = INT_MIN;
  // findMax(arr,5,index, maxi);  

  //*Solve --> Stor even numbers in array into vector
  // int arr[] = {1,2,3,4,5};
  // int size = 5;
  // int index = 0;
  // vector<int> nums;
  // solve(arr,size,index, nums);
  // for (auto i:nums)
  // {
  //   /* code */
  //   cout<<i<<" ";
  // }
  
  //* Double
  // int arr[] = {1,2,3,4,5};
  // int size = 5;
  // int index = 0;
  // doubleTheArray(arr,size,index);
  // for (auto i:arr)
  // {
  //   /* code */
  //   cout<<i<<" ";
  // }

  //* Print Digits
  int num = 4215;
  vector<int> ans;
  printDigits(num,ans);

 return 0;
}