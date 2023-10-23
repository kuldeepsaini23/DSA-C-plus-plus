#include<iostream>
using namespace std;

//* Babbar bhaiya Approach

int partition(int arr[], int s, int e){
  //Step-1: choose pivot element
  int pivotIndex = s;
  int pivotElement = arr[s];

  //Step-2: find the right postion for the ELement and place it there
  int count =0;
  for(int i=s+1; i<=e; i++){
    if(pivotElement >= arr[i]){
      count ++;
    }
  }

  // JAb main loop se bahar hua, toh mere pass pivot ki right position ka index ready h
  int rightIndex = s+count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  //Step-3: Left me chote element and right me bade
  int i = s;
  int j = e;
  while(i< pivotIndex && j> pivotIndex){
    while(arr[i] <= pivotElement){
      i++;
    }
    while(arr[j] > pivotElement){
      j--;
    }

    // 2 Possibilities
    //A-> found element to swap
    //B-> no need to swap
    if(i< pivotIndex && j> pivotIndex){
      swap(arr[i],arr[j]);
    }
  }

  return pivotIndex;

}

void quickSort(int arr[], int s, int e){
  //Base Case
  if(s >=e){
    return;
  }

  //Partition logic, return pivot Index
  int p = partition(arr, s, e);

  //Recrusive calls
  //pivot element -> left
  quickSort(arr,s, p-1); 

  //Pivot elemnt --> right
  quickSort(arr, p+1, e);
  //! Maine yha pe p+1 ki jagah p ko Recrusive call pe bhj diya jiski vajh se I think ye infinte calls ho rhi thi and jo program hh vo exit ho jaa rha tha

}
 
int main(){
  int arr[] = {3,23,51,12,7,2,4};
  int size = 7;
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }

  quickSort(arr,0, size-1);

  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  
      
 return 0;
}