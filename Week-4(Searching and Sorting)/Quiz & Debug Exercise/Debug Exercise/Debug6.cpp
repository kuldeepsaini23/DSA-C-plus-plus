#include<iostream>
using namespace std;

//* Debug the code. Implement selection sort. (The code is correct no change)
void selectionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
  }

  for (int i = 0; i < size; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  
}
 
int main(){
  int arr[] = {5,6,4,3,2,1};
  selectionSort(arr,6);
      
 return 0;
}