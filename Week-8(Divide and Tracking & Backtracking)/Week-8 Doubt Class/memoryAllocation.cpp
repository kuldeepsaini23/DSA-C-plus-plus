#include<iostream>
using namespace std;
 
//* Memory Allocation 

void print(int **v, int rows, int cols){
  for (int i = 0; i < rows; i++)
  {
    /* code */
    for (int j = 0; j < cols; j++)
    {
      /* code */
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
  
}
 
int main(){
  //* 1. Allocate int
  int *ptr = new int(5);

  //* Allocate using malloc(withour new keyword)

  int *mptr = (int*)malloc(4);
  *mptr = 5;

  cout<<*ptr<<" "<<*mptr<<endl;

  //* 2. 1-D Array Allocation
  int *arr = new int[5];

  //* Using Malloc(without new keyword)
  int *arrMalloc = (int *)malloc(5*sizeof(int));
  for (int i = 0; i < 5; i++)
  {
    /* code */
    int d;
    cin>>d;
    arr[i] = arrMalloc[i] = d;
  }
  
  for (int i = 0; i < 5; i++)
  {
    /* code */
    cout<<"This Heap Array with new Keyword "<<arr[i]<<endl;
    cout<<"This Heap Array without new Keyword using Malloc "<<arrMalloc[i]<<endl;
  }
  
  //Deleting
  delete[] arr;
  //!Deleting in Maaloc
  free(arrMalloc);

  //* 3. 2-D Allocation
  int rows = 5, cols = 5;
  int **ptr2d = new int*[rows];

  for (int i = 0; i < rows; i++)
  {
    /* code */
    ptr2d[i] = new int[cols];
  }


  //* Wihout new keyword (malloc)
  int **ptr2dmalloc = (int**)malloc(sizeof(int *)* rows);
  for (int i = 0; i < rows; i++)
  {
    /* code */
    ptr2dmalloc[i] = (int *)malloc(sizeof(int)*cols);
  }


  //input
  for (int i = 0; i < rows; i++)
  {
    /* code */
    for (int j = 0; j < cols; j++)
    {
      /* code */
      ptr2d[i][j] = 7;
      ptr2dmalloc[i][j] = 8;
    }
    
  }
  
  //Printing
  print(ptr2d, rows,cols);
  print(ptr2dmalloc,rows,cols);
  

  //! Deleting
  //Freeing Rows
  for (int i = 0; i < rows; i++)
  {
    /* code */
    delete[] ptr2d[i];
  }
  delete[] ptr2d;

  
  for (int i = 0; i < rows; i++)
  {
    /* code */
    free(ptr2dmalloc[i]);
  }
  free(ptr2dmalloc);

 return 0;
}