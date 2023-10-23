#include<iostream>
using namespace std;

//* Laskhay Bhaiya
void quickSort(int a[], int start, int end){
  //Base Case
  if(start >= end){
    return;
  }
  
  int pivot = end;
  
  //Partition vala code
  int i = start-1;
  int j = start;
  while(j < pivot){
    if(a[j]<a[pivot]){
      i++;
      swap(a[i],a[j]);
    }
    
    j++;
  }
  ++i;
  swap(a[i],a[pivot]);
  pivot = i;
  
  //Recrusion calls
  //0 to Pivot-1 
  quickSort(a, start, pivot-1);

  //Pivot+1 --> Right  
  quickSort(a, pivot+1, end);
    
}
 
int main(){
  int arr[] = {3,23,51,12,7,2,4};
  int size = 7;
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  quickSort(arr,0, size-1);

  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
      
 return 0;
}