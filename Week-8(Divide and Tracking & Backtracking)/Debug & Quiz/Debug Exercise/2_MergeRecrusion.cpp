#include<iostream>
using namespace std;

//* Debug the Code
void merge_sort(int arr[], int start, int end) {
    //* Adding Base Case
    if(start>=end){
      return;
    }

    int mid = (start + end) / 2;
    merge_sort(arr, start, mid); //* Change mid-1 to mid
    merge_sort(arr, mid+1, end);
    merge(arr, start, mid, end);
}
 
int main(){
 
      
 return 0;
}