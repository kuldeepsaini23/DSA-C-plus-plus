#include<iostream>
using namespace std;
 
  // void findMissing(int *a, int n){
     //visited method
  //   for (int i = 0; i < n; i++){
  //     int index = abs(a[i]);
  //     if(a[index-1]>0){
  //       a[index-1] *= -1;
  //     }
  //   }

   //all positve index are missing
  //   for(int i=0; i<n; i++){
  //     if(a[i]>0)
  //     cout<<i+1<<" ";
  //   }
    
    //sorting + swapping method
  //   int i=0;
  //   while(i<n){
  //     int index = a[i]-1;
  //     if(a[i]!= a[index]){
  //       swap(a[i], a[index]);
  //     }else{
  //       i++;
  //     }
  //   }

  //   for (int i = 0; i < n; i++)
  //   {
  //     /* code */
  //     if(a[i] != i+1){
  //       cout<<i+1<<" ";
  //     }
  //   }
    
  // }

 
int main(){
 
//  int n;
//  int a[]={3,3,3,3,3};
//  n = sizeof(a)/sizeof(int);
//  findMissing(a,n);

//!Factorial of large number
//* geeks for geeks:- 

//!Adding two number string(ye question smajna impt hh factorial vala question karne ke liye)
//* geeksforgeeks:- https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-two-arrays2408/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

      
 return 0;
}

// vector<int>ans;
//         int m= matrix.size();
//         int n= matrix[0].size();
//         int total_elements =m*n;

//         int startingRow = 0;
//         int endingCol = n-1;
//         int endingRow = m-1;
//         int startingCol = 0;

//         int count = 0;
//         while(count < total_elements){
//             //Print starting Row
//             for(int i=startingCol; i<=endingCol && count<total_elements; i++){
//                 ans.push_back(matrix[startingRow][i]);
//                 count++;
//             }
//             startingRow++;

//              //Print Last Column
//             for(int i=startingRow; i<=endingRow&& count<total_elements; i++){
//                 ans.push_back(matrix[i][endingCol]);
//                 count++;
//             }

//             endingCol--;

//             //Print Last Row
//             for(int i=endingCol; i>=startingRow&& count<total_elements; i--){
//                 ans.push_back(matrix[endingRow][i]);
//                 count++;
//             }
//             endingRow--;

//              //Print first Column
//             for(int i=endingRow; i>=startingRow&& count<total_elements; i--){
//                 ans.push_back(matrix[i][startingCol]);
//                 count++;
//             }

//             startingCol++;

           
//         }
//         return ans;