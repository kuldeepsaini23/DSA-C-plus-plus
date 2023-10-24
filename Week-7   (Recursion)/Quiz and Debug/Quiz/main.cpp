#include<iostream>
using namespace std;
 
// void print(int n){
//   if(n>4000){
//     return;
//   }

//   cout<<n<<" ";
//   print(2*n);
//   cout<<"return aa rha hu"<< n <<endl;
// }

//* Q19
// int f(int a[], int i, int n){
//   if(n<=0) return 0;
//   else if(a[i]%2==0) return a[i] + f(a, i+1,n-1);
//   else return a[i] - f(a, i+1,n-1);
// }

//*Q27
void print(int n, int j){
  if(j>=n){
    return;
  }

  if(n-j>0 && n-j>=j){
    cout<< j << " " << n-j << endl;
  }

  print(n, j+1);
}

//* Q13
  void fun(int n){
    if(n==0){
      return;
    }

    cout<< n%2;
    fun(n/2);
  }

//* Q17
int f(int n){
  if(n<=1) return 1;
  if(n%2==0) return f(n/2);
  return f(n/2) + f(n/2 +1);
}


int main(){
  //*Q13
  // fun(11);

  // print(500);
  //* Q17
  cout<<f(15)<<endl;


  //* Q19
  // int arr[] = {12,7,13,4,11,6};
  // cout<<f(arr,2,4)<<endl;

  //* Q27
  int n = 8;
  print(n,1);
 return 0;
}
