#include<iostream>
using namespace std;
 

//  void printName(string name){
//  for (int i = 0; i < 5; i++)
//  {
//   /* code */
//   cout<<name<<endl;
//  }
//  }

//* Function Declaration
void printLine();

// void printLine(){
//   for (int i = 0; i < 10; i++)
//   {
//     /* code */
//     cout<<"Sunder ko Sunderi psnd hai"<<endl;
//   }
  
// }

//* Add two numbers
// int addTwoNumbers(int a, int b){
//   int c = a+b;
//   return c;
// }

//!Questions
//* 1. Write a function ti Print 3 numbers?
// void printSum(int a, int b, int c){
//   int answer = a+b+c;
//   cout<<answer<<endl;
// }
//* Write a function to return sum of 3 numbers? 
// int printReturnSum(int a, int b, int c){
//   int answer = a+b+c;
//   return answer;
// }

//* 2. Find max of 3 numbers
// void printMaximum(int num1, int num2, int num3){
  // if(num1>num2){
  //   if(num1>num3){
  //     cout<<"Num 1:"<<num1<<" is largest Numer";
  //   }else{
  //     cout<<"Num 3:"<<num3<<" is largest Numer";
  //   }
  // }else{
  //   if(num2>num3){
  //     cout<<"Num 2:"<<num2<<" is largest Numer";
  //   }else{
  //     cout<<"Num 3:"<<num3<<" is largest Numer";
  //   }
  // } 

  // if(num1>num2 && num1>num3){
  //   cout<<"Maximum Number is: "<<num1<<endl;;
  // }
  // else if(num2>num1 && num2>num3){
  //   cout<<"Maximum Number is: "<<num2<<endl;;
  // }else{
  //   cout<<"Maximum Number is: "<<num3<<endl;;
  // }

  //TODO: Inbuild Function
  // int ans1 = max(num1,num2);-->Impt
  // int finalAnswer = max(ans1,num3);
  // cout<<"Maximum of 3 numbers is: "<<finalAnswer<<endl;
// }

//* 3. Countinf from 1 to N
// void countOneToN(int num){
//   for (int i = 1; i <= num; i++)
//   {
//     /* code */
//     cout<<i<<endl;
//   }
  
// }

//* 5. Check Even or Odd
// void checkEvenOdd(int num){
//   if(num%2==0){
//     cout<<num<<" is Even Number"<<endl;
//   }else{
//     cout<<num<<" is Odd Number"<<endl;
//   }
// }

//* 6. Return Sum of all Numbers from 1 to N
// int sumOfNumbersUptoN(int num){
//   int sum=0;
//   for (int i = 1; i <= num; i++)
//   {
//     /* code */
//     sum+=i;
//   }
//   return sum;
// }

//* 7. Sum of all Even Numbers from 1 to N
// void sumOfEvenNumbersUptoN(int num){
//   int sum=0;
//   for (int i = 1; i <= num; i++)
//   {
    /* code */
    // if(i%2==0){
    //   sum+=i;
    // }else{--> Not required
    //   sum+=0;
    // }
  // }

  /*****************OR****************/

  // for (int i = 2; i <= num; i+=2)
  // {
  //   /* code */
  //  sum+=i;
  // }
//   cout<<"Sum of 1 to "<<num<<" Even numbers is: "<<sum<<endl;
// }

//* 4. Number is Prime or not
bool checkPrime(int n){

  //TODO: Special Cases
  if(n==1){
    return true;
  }
  // Loop will run from 2 to <=n-1 or 2 to <n
  for (int i = 2; i < n; i++)
  {
    /* code */
    if(n%i==0){
      //reminder = 0 --> perfectly divisible
      //not a prime  
      return false;
    }
  }
  //yha pe har number se divide krke dekhliya hh agar yha aagaye hh tohh koi bhi number n ko perfectly divide nhi karpaya hh
  return true;
}



int main(){
 //! Functions

//  for (int i = 0; i < 5; i++)
//  {
//   /* code */
//   cout<<"kuldeep Saini"<<endl;
//  }


//  for (int i = 0; i < 5; i++)
//  {
//   /* code */
//   cout<<"Prikshit Saini"<<endl;
//  }

 
//  for (int i = 0; i < 5; i++)
//  {
//   /* code */
//   cout<<"Tania"<<endl;
//  }

//  for (int i = 0; i < 5; i++)
//  {
//   /* code */
//   cout<<"Simaran"<<endl;
//  }

  // printName("Kuldeep");
  // printName("Kholi");

  // printLine();

  //* Add two numbers
  // int sum = addTwoNumbers(2,3);
  // cout<<sum<<endl;

  //!Questions
  //* 1. Write a function to Print 3 numbers?
  // printSum(2,3,2);
  //* Write a function to return sum of 3 numbers?
  // cout<<printReturnSum(2,3,4);
  // int sum = printReturnSum(2,3,4);
  // cout<<"Sum is: "<<sum<<endl;

  //* 2. find max of 3 numbers
  // printMaximum(1,-2,-3);
  // printMaximum(-1,2,-3);
  // printMaximum(1,2,3);


  int n;
  cout<<"Enter the value of N: ";
  cin>>n;

  //* 3. Countinf from 1 to N
  // countOneToN(n);

  //* 5. Check Even or Odd
  // checkEvenOdd(3);
  // checkEvenOdd(4);

  //* 6. Sum of all Numbers from 1 to N
  // int answer = sumOfNumbersUptoN(n);
  // cout<<"Sum of 1 to "<<n<<" numbers is: "<<answer<<endl;

  //* 7. Sum of all Even Numbers from 1 to N
  // sumOfEvenNumbersUptoN(n);

  //* 4. number is Prime or not 
  bool prime = checkPrime(n);
  if(prime){
    cout<<n<<" is a Prime Number";
  }else{
    cout<<n<<" is not a Prime Number";
  }

 return 0;
}

//* Function Defination after the function call --> is is possible because function is declare at line no 13 and function call is at line 63
// void printLine(){
//   for (int i = 0; i < 10; i++)
//   {
//     /* code */
//     cout<<"Sunder ko Sunderi psnd hai"<<endl;
//   }
  
// }
