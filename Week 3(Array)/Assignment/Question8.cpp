#include<iostream>
#include<algorithm>
using namespace std;

//* Find Duplicate number
  //TODO:sort method
// int duplicateNumber(int*arr, int n){
//   sort(arr,arr+n);
//   for (int i = 0; i < n-1; i++)
//   {
//     /* code */
//     if(arr[i] == arr[i+1]){
//       return arr[i];
//     }
//   }
//   return -1;
// }

//TODO: Vistited marking
int duplicateNumber(int*arr, int n){
  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    /* code */
    int index = abs(arr[i]);
    if(arr[index] < 0 ){
      ans = index;
      // return index;
    }
  
    arr[index] *= - 1;
  }
  return ans;
}
 

 //TODO:postion swap
int duplicateNumberSwap(int*arr, int n){
  while(arr[0]!=arr[arr[0]]){
    swap(arr[0],arr[arr[0]]);
  }
  return arr[0];
}
 


 
int main(){
 int arr[] = {1,3,4,2,2};
 int size = sizeof(arr)/sizeof(int);

//  cout<<duplicateNumber(arr,size);

 //* postion swap
 cout<<duplicateNumberSwap(arr,size);
      
 return 0;
}