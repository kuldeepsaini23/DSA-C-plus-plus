#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr){
  int ans = 0 ;
  for (int i = 0; i < arr.size(); i++)
  {
    ans = ans^arr[i];
    cout<<ans<<" ";
  }
  return ans;
}

int main()
{
  //! Vectors -> Dynamic array
/*   vector<int> arr;

  //*insert
  arr.push_back(5);
  arr.push_back(4);
  arr.push_back(6);

  //*Print
  for (int i = 0; i < arr.size(); i++)
  {
    /* code  
    cout << arr[i] << " ";
  }
  cout << arr.size() << endl;
  cout << arr.capacity() << endl;

  //*Remove
  arr.pop_back();

  //*Print
  for (int i = 0; i < arr.size(); i++)
  {
    /* code  
    cout << arr[i] << " ";
  }
  cout << arr.size() << endl;
  cout << arr.capacity() << endl;


  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  vector <int> brr(n,10);
  for (int i = 0; i < brr.size(); i++)
  {
    /* code  
    cout << brr[i] << " "; 
  }

  cout << brr.size() << endl;
  cout << brr.capacity() << endl;

 

  vector <int> crr{10,20,30,40,50};

   for (int i = 0; i < crr.size(); i++)
  {
    /* code  
    cout << crr[i] << " "; 
  }
  cout << brr.size() << endl;
  cout << brr.capacity() << endl;

  //*Empty
  cout<<"Vector crr is empty or not "<<crr.empty()<<endl;*/

  //! Unique element
  // int n;
  // cout<<"Enter the size of array:5";
  // cin>>n;

  // vector<int> arr(n);
  // cout<<"Enter the elements "<<endl;
  // for (int i = 0; i < arr.size(); i++)
  // {
  //   cin>>arr[i];
  // }

  // int uniqueElement = findUnique(arr);

  // cout<<"Unique ELement is "<<uniqueElement<<endl;

  //!Uninon of arrays
  // int arr[] = {1,3,5,7,9};
  // int sizea = 5;
  // int brr[] = {2,4,6,8};
  // int sizeb = 4;

  // vector<int> ans;

  //*Pushing all the elements of arr[] to ans
  // for (int i = 0; i < sizea; i++)
  // {
  //   ans.push_back(arr[i]);
  // }
  

  //*Pushing all the elements of arr[] to ans
  //  for (int i = 0; i < sizeb; i++)
  // {
  //   ans.push_back(brr[i]);
  // }

  //*Printing ans
  // for (int i = 0; i < ans.size(); i++)
  // {
  //   cout<<ans[i]<<" ";
  // }
  
  //!Intersection
  // vector<int> arr{1,3,5,7,9};
  // vector<int> brr{1,7,8,2};
  

  // vector<int> ans;  
  //*Outer loop on arr vector
  // for (int i = 0; i < arr.size(); i++){
  //   int element = arr[i];
  //   for (int j = 0; j < brr.size(); j++){
  //     if(element == brr[j]){
  //       brr[j] = -1; //!Mark kraya ki 3 verify hogya hh
  //       ans.push_back(element);
  //     }
  //   }
  // }

   //*Printing ans
    // for(auto value: ans){
    //   cout<<value<<" ";
    // }

  //!H/w


//   //!Pairs Sum
//   vector<int> arr{1,3,5,7,2,4,6};
//   int sum = 9;

// //*Print all pairs
// //*Outer loop will tranverse for each element
//   for (int i = 0; i <arr.size(); i++){
//     //* for each element, tranverse on aage vala element
//     for (int j = i+1; j < arr.size(); j++){
     
//       if(arr[i]+ arr[j] == sum){
//         cout<<"("<<arr[i]<<","<<arr[j]<<")  ";
//       }
//     }
//     cout<<endl;
//   }

//!Triplet
//   vector<int> arr{1,3,5,7,2,4,6};
//   int sum = 9;

// //*Print all pairs
// //*Outer loop will tranverse for each element
//   for (int i = 0; i <arr.size(); i++){
//     int element = arr[i];
//     for (int j = i+1; j < arr.size(); j++){
//       int element2 = arr[j];

//       for (int k = j+1; k < arr.size(); k++){
//         int element3 = arr[k];
//         if(element+element2+element3 == sum){
//         cout<<"("<<element<<","<<element2<<","<<element3<<")  "<<endl;
//         }
//       }
//     }
//   }
  
  //!Sort 0's and 1's
  vector<int> arr{0,1,0,1,1,0,1,0,1,1};

  int start=0;
  int end = arr.size()-1;
  int i=0;

  while(start<= end){ //* i!=end is also correct
    if(arr[i]==0){
      //* swap from left
      swap(arr[i], arr[start]);
      start++,i++;
    }

     if(arr[i]==1){

      //* swap from right
      swap(arr[i], arr[end]);
       end--;
    }
  }

  //*Print
  for ( auto value: arr){
    cout<<value<<" ";
  }
  
  

  return 0;
}