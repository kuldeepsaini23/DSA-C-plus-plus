#include <iostream>
#include <vector>
using namespace std;

// printArray
void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    /* code */
    cout << arr[i] << " ";
  }
  cout << endl;
}

// printVector
void printVector(vector<int> v)
{
  cout<<"Print Vector through For normal loop: ";
  for (int i = 0; i < v.size(); i++)
  {
    /* code */
    cout << v[i] << " ";
  }
  cout << endl;
}

//* printVector through for each loop
void printVectorForEachLoop(vector<int> v)
{
  cout<<"Print Vector through For each loop: ";
  for (auto element:v)
  {
    /* code */
    cout<<element<<" ";
  }
  cout<<endl;
}

int main()
{

  //! Array
  //*Static Array
  //  int arr[5] = {1,2,3,4,5};
  //  printArray(arr,5);

  //*Dynamic Array
  // int n;
  // cin >> n;
  // int arr[n];
  /**********or*********/
  // int *arr = new int[n];
  // printArray(arr, 5);


  //! Vectors
  // vector<int> v;
  // //*inserting
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);

  // printVector(v);

  ////*Deleting --> last element hota hh
  // v.pop_back();
  // printVector(v);

  //* Inserting loop to take infinite input
  // while(1){
  //   int n;
  //   cin>>n;
  //   v.push_back(n);
  //   cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
  // }


  //* Taking input in vector from user
  // int n; cin>>n;
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   int d;
  //   cin>>d;
  //   v.push_back(d);
  // }

  //push elements after taking n input
  // for (int i = 0; i < 4; i++)
  // {
  //   /* code */
  //   v.push_back(10);
  // }

  // printVector(v);

  // cout<<v[0]<<endl;
  // /*Or can use*/
  // cout<<v.at(0)<<endl;
  
  //* Clear the vector
  // v.clear();//--> make vector size 0 not capcity

  //* Different method to initialize vector
  // vector<int> arr;

  // vector<int> arr(5,-1);
  // printVector(arr);
  // cout<<arr.capacity()<<" "<<arr.size()<<endl;
  // arr.pop_back();
  // printVector(arr);
  // cout<<arr.capacity()<<" "<<arr.size()<<endl;

  // vector<int> arr = {1,2,3,4,5};
  // printVector(arr);

  // vector<int> arr{1,2,3,4,5,6};
  // printVector(arr);

  //*Copy a vector
  // vector<int>v1 = {1,2,3,4,5};

  // vector<int>v2(v1);
  // printVector(v2);
  //TODO: If you change anything in v2 it will not affect v1 beacause it is a copy and vice-versa
  // v2.pop_back();
  // printVector(v2);
  // printVector(v1);


  //*Access First and Last element
  // vector <char> v;
  // v.push_back('a');
  // v.push_back('b');
  // v.push_back('c');

  // cout<<"First Element: "<<v[0]<<" ";
  // cout<<"First Element: "<<v.front()<<endl;
  // cout<<"Last Element: "<<v[v.size()-1]<<" ";
  // cout<<"Last Element: "<<v.back();


  //*Printing Vector through For each loop
  vector<int>v;
  v.push_back(10);
  v.push_back(20); 
  v.push_back(30);
  v.push_back(40);

  printVectorForEachLoop(v);

  printVector(v);

  return 0;
}