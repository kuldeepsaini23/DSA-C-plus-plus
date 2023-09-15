#include<iostream>
using namespace std;
 
//* 1. Convert Km to Miles
// void kmToMiles(float num){
//   float miles = 0.621;
//   cout<<num*0.621<<endl;
// }


//* 2. Count all set bits
// int countSetBits(int n){
//   int count = 0;

//   while(n>0){
//     int operation = n & 1;
//     if(operation){
//       count++;
//     }
//     n = n>>1;
//   }
//   return count;
// }

//* 3. Check a number is Even/Odd using bit-wise
void checkEvenOrOdd(int n){
  if(n&1){
    cout<<"Number is Odd"<<endl;
  }else{
    cout<<"Number is Even"<<endl;
  }
}


 
int main(){
 
  int n;
  cout<<"Enter the value of N: ";
  cin>>n;

  //* 1. Convert Km to Miles
  // kmToMiles(n);

  //* 2. Count all set bits
  // int solution = countSetBits(n);
  // cout<<"The set Bit is present in number "<<n<<" is: "<<solution<<endl;

  //* 3. Check a number is Even/Odd using bit-wise
  checkEvenOrOdd(n);

      
 return 0;
}