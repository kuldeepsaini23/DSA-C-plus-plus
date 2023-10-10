#include<iostream>
using namespace std;
 
//* Factorial
int factorial(int n){
  //base case
  if(n==1)
    return 1;
  
  if(n==0)
    return 1;

  //recursive relation
  int recrusionKaAns = factorial(n-1);

  //processing
  int ans = n*recrusionKaAns;

  return ans;
}

 
 
//* Print n to 1
void print(int n){
  //base case
  if(n==0) return;

  //processing
  cout<<n<<" ";

  // Recursive
  print(n-1);
}


//* Printing 1 to n
void print1(int n){
  //base case
  if(n==1){
    cout<<n<<" ";
    return;
  } 
    
  //recurisive
  print1(n-1);

  //processing
  cout<<n<<" ";
 
}


//* 2^power
int pow(int n){
  //Base case
  if(n==0){
    return 1;
  }

  //Recurseive
  int ans = 2*pow(n-1);
  return ans;
}


//* fibonachi series
int fib(int n){
  //base case
  if(n==0)
    return 0;
  if(n==1)
    return 1;

  // Recrusive Call
  int ans = fib(n-1) + fib(n-2);
  return ans;
  
}

//* Sum of n to 1
int sum(int n){
  //base case
  if(n==0){
    return 0;
  }

  //recursive call
  int ans = n + sum(n-1);
  return ans;
}


int main(){
  //! Recrusion
  //* Factorial
  // int n = 5;
  // cout<<factorial(n);

  //* Printing n to 1
  // int n = 5;
  // print(n);

  //* Printing n to 1
  // int n = 5;
  // print1(n);

  //* 2^power
  // int n = 5;
  // cout<<pow(n);

  //*fibonachi series
  // int a = 7;
  // cout<<fib(a);

  //*Sum from n to 1
  int n = 5;
  cout<<sum(n);


 return 0;

}