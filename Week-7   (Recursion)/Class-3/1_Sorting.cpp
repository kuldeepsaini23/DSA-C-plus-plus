#include<iostream>
using namespace std;
 
//* Sorting
bool checkSorted(int arr[], int s, int index){
  //Base Case
  if(index>=s){
    return true;
  }

  //processing
  if(arr[index] > arr[index-1]){
    //aage check
    //Recrusion
    bool aageKaAns = checkSorted(arr,s,index+1);
    return aageKaAns;
  }else{
    //sorted nhi hh
    return false;
  }

}

 
int main(){
  //* Sorting
  int arr[] = {10,20,30,40,50};
  int size = 5;
  int index = 1;

  bool isSorted = checkSorted(arr,size,index);
  if(isSorted){
    cout<<"Array is Sorted"<<endl;
  }
  else{
    cout<<"Array is not sorted"<<endl;
  }      

 return 0;
}