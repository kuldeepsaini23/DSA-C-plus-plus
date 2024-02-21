#include<iostream>
using namespace std;

//* Heap = C.B.T + min Heap or max Heap
class Heap{
  public:
    int *arr;
    int size;
    int capacity;

    Heap(int capacity){
      this->arr = new int[capacity];
      this->capacity = capacity;
      this->size = 0;
    }

    //* Insert
    void insert(int val){
      //overflow
      if(size == capacity){
        cout << "HEAP OVERFLOW: " << endl;
        return;
      }

      //size increse kar jaegaa
      size++;
      int index = size;
      arr[index] = val;

      //take the value to its current position
      while(index > 1){
        int parentIndex = index/2;
        //max-Heap
        if(arr[parentIndex] < arr[index]){
          swap(arr[index], arr[parentIndex]);
          index = parentIndex;
        }
        else{
          break;
        }
      }
    }

    // Print Heap
    void printHeap(){
      cout << "Printing the conetent of heap: ";
      for (int i = 0; i <= size; i++)
      {
        /* code */
        cout << arr[i] << " ";
      }
      cout << endl;
    }

    // Delete
    int deleteElement(){
      int answer = arr[1];
      //replace
      arr[1] = arr[size];
      //last element ko delete uski orignal positions e
      size --;

      int index = 1;
      // index <= size last elemnt hh usko heapify krne ki need nhi hh kyuki usko kisse compare kroge and vo vaa compare hoge hi aya hoga
      while(index < size){
        int leftIndex = 2*index;
        int rightIndex = 2*index + 1;

        //find out krna h, sabse bda kon hai
        int largestKaIndex = index;
        //check left child
        if(leftIndex <= size && arr[largestKaIndex] < arr[leftIndex]){
          largestKaIndex = leftIndex;
        }

        // check right
        if(rightIndex <= size && arr[largestKaIndex] < arr[rightIndex]){
          largestKaIndex = rightIndex;
        }

        //no change
        if(index == largestKaIndex){
          break;
        }
        else{
          swap(arr[index], arr[largestKaIndex]);
          index = largestKaIndex;
        }
      }

      return answer;
    }

};

//* Heapify
void heapify(int *arr, int n, int index){
  int leftIndex = 2*index;
  int rightIndex = 2*index +1;
  int largestKaIndex = index;

  //3 me se max lao
  if(leftIndex <= n && arr[leftIndex] > arr[largestKaIndex] ){
    largestKaIndex = leftIndex;
  }

  if(rightIndex <= n && arr[rightIndex] > arr[largestKaIndex] ){
    largestKaIndex = rightIndex;
  }

  //after these 2 condition largestKaIndex will be pointing towards largest element among 3
  if(index != largestKaIndex){
    swap(arr[index], arr[largestKaIndex]);

    //ab recrusion krdegaa
    index = largestKaIndex;
    // headpify(arr, n, largestKaIndex); if index ko largestIndex ke equal nhi krte hh tih
    heapify(arr, n, index);
  }
  //! Base Case isliye nhi likha jab index == largestKaIndex hoga toh Recrusion vale loop me jayegaa hi nhi 
}

//! MOST IMPT
//* Array to Heap
void buildHeap(int arr[], int n){
  for (int index = n/2; index > 0; index--)
  {
    /* code */
    heapify(arr, n, index);
  }
  
}

//* Heap Sort
void heapSort(int arr[], int n){
  while(n != 1){
    // n se swap isliye kiya hh kyuki indexing 1 based hai
    swap(arr[1],arr[n]);
    n--;
    heapify(arr,n,1);
  }
}
 
int main(){
  // Creating new HEap
  // Heap h(20);
  //insertion
  // h.insert(10);
  // h.insert(20);
  // h.insert(5);
  // h.insert(11);
  // h.insert(6);

  // print HEap
  // h.printHeap();

  //Delete Heap
  // int ans = h.deleteElement();
  // cout << "Deleted Element: " << ans << endl;
  // h.printHeap();

  //* Array to Heap
  // int arr[] = {5,10,15,20,25,12};
  int arr[] = {-1,5,10,15,20,25,12};
  int size = 6;
  // Building Heap
  buildHeap(arr, size);
  cout << "Printing Heap: ";
  for (int i = 1; i <= size; i++)
  {
    /* code */
    cout << arr[i] << " ";
  }
  cout << endl;
  cout <<"THE Value of Size is: "<< size<< endl;
  //Sorting
  // TODO: Heare doubt why the calue of size is changing
  heapSort(arr,size);
  cout <<"THE Value of Size is: "<< size<< endl;
  cout << "Printing Sorted Array: ";
  for (int i = 1; i <= 6; i++)
  {
    /* code */
    cout << arr[i] << " ";
  }
  cout << endl;

      
 return 0;
}