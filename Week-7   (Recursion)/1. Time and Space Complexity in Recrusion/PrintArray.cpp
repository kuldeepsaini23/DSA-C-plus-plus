#include<iostream>
using namespace std;
 
 
//* Print Array
void printArray(int a[], int n){
  if(n==0) return;
  cout<<a<<" ";
  printArray(a+1, n-1);
}

int main(){
  int arr[] = {1,2,3,4,5,3};
  printArray(arr,6);
      
 return 0;
}