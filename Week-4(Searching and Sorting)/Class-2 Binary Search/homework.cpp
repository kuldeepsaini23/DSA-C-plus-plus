#include<iostream>
using namespace std;

//* Find Minimum Element in Array 
int findMin(int arr[], int n){
  int s= 0 ;
  int e = n-1;

  while(s<=e){
    int mid = s +(e-s)/2;

    if(s==e) return s;

    if(mid+1<=n-1 && arr[mid]>arr[mid+1]) return mid+1;
    else if(mid-1>=0 && arr[mid-1]>arr[mid]) return mid;
    else if(arr[s]>arr[mid]) e = mid-1;
    else s = mid+1;
  }
  return -1;
}

int sqrt(int x){
  int s =0;
  int e = x;
  int ans = -1;

  while(s<=e){
    int mid = s+(e-s)/2;

    long long int predicateFunction = mid*mid;

    if(predicateFunction==x){
      return mid;
    }else if(predicateFunction>x){
      e = mid-1;
    }else{
      ans = mid;
      s = mid+1;
    }

  }
  return ans;
}

 
int main(){
  //* Find Minimum Element in Rotated and Sorted Array
  // int arr[]={12,14,16,2,4,6,8,10};
  // int n = 8;
  // cout<<findMin(arr,n)<<endl;

  //*Sqrt(x) in Decimals
  int x = 20;
  int ans = sqrt(x);
  cout<<ans<<endl;
  cout<<"This is the closest Integer to your Answers \n If you want to complete answer upto some precision then Enetr the value of precision: ";
  int precision; cin>>precision;
  double finalAnswer = ans;
  double step = 0.1;
  cout<<"I am here1"<<endl;

  for (int i = 0; i < precision; i++)
  {
    /* code */
    for (double j = finalAnswer; j*j<=x; j+=step)
    {
      /* code */
      finalAnswer = j;
    }
    step/=10;
    cout<<"The Final step after j loop"<<finalAnswer<<endl;
  }
  cout<<"The Final Answer is: "<<finalAnswer<<endl;
      
 return 0;
}