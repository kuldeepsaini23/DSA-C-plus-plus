#include<iostream>
using namespace std;

//* Merge Sort
void merge(int arr[], int s, int e){
  int mid = (s+e)/2;

  int lengthLeft = mid-s+1;
  int lengthRight = e-mid;

  //Create Left and Right Array
  int *left = new int[lengthLeft];
  int *right = new int[lengthRight];

  //Copy Values from original Array to Left Array
  //K is the pointer(Not c++ vala pointer mtlb ek tarik se location) which is starting index of original array
  //Left array Copy
  int k=s;
  for (int i = 0; i < lengthLeft; i++)
  {
    /* code */
    left[i] = arr[k];
    k++;
  }
  
  //Right Array Copy
  k = mid+1;
  for (int i = 0; i < lengthRight; i++)
  {
    /* code */
    right[i] = arr[k];
    k++;
  }
  
  //Actual Merge Logic
  //Left array is already soreted
  //Right Array is already sorted
  int leftIndex = 0;
  int rightIndex = 0;
  //! Impt yhi pe glti hoti hh mainArrayIndex pe
  int mainArrayIndex = s;

  while(leftIndex < lengthLeft && rightIndex < lengthLeft){
    if(left[leftIndex] < right[rightIndex]){
      arr[mainArrayIndex] = left[leftIndex];
      mainArrayIndex++;
      leftIndex++;
    }else{
      arr[mainArrayIndex] = left[rightIndex];
      mainArrayIndex++;
      rightIndex++;
    }
  }

  //Left Array Exhaust but Right Array have Remaining Element 
  while(leftIndex < lengthLeft){
    arr[mainArrayIndex] = right[leftIndex];
    mainArrayIndex++;
    leftIndex++;
  }

  //Right Array Exhaust but Left Array have Remaining Element
  while(rightIndex < lengthRight){
    arr[mainArrayIndex] = right[rightIndex];
    mainArrayIndex++;
    rightIndex++;
  }

  //! one Thing Reamining i.e, to delete Heap (Dynamic) Array
  delete [] left;
  delete [] right;

}


void mergeSort(int arr[], int s, int e){
  //Base Case(s>=e)
  if(s > e){
    return;
  }

  if(s==e){
    //Single Element
    return;
  }

  //* Step-1: Break with mid
  int mid = (s+e)/2;
  //s se mid left array
  //mid+1 se e tak right array


  //* Step-2: Recrusion
  // Use Recrusion and sort right and left array

  //Recrusive call for left array
  mergeSort(arr,s, mid);

  //Recrusive call for Right array
  mergeSort(arr,mid+1,e);

  //* Step-3: Merge with sorted
  merge(arr,s,e);
}
 
int main(){
  int arr[] = {2,1,6,9,4,5};
  int size = 6;
  int s = 0;
  int e = size-1;

  cout<<"Before Merge Sort: ";
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  mergeSort(arr,s,e);

  cout<<"After Merge Sort: ";
  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  cout<<endl;

 return 0;
}