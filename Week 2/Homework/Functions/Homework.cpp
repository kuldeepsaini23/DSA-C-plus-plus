#include <iostream>
#include <cmath>
using namespace std;

//* 1. Display Area of a Circle
// float areaOfCircle(int radius)
// {
//   float area = 3.14 * radius * radius;
//   return area;
// }

//* 2. factorial of a number
// long long int fact(long long int n){
//   if(n==0 || n==1){
//     return 1;
//   }

//   long long int fact = 1;
//   for (int i = 1; i <= n; i++)
//   {
//     /* code */
//     fact*=i;//--> fact = fact*i;
//   }
//   return fact;
// }

//* 3. Check prime or not Optimized
// bool checkPrime(int n){

//   //TODO: Special Cases
//   if(n==1){
//     return true;
//   }
   // Loop will run from 2 to <=n-1 or 2 to <n
//   for (int i = 2; i <= sqrt(n); i++)
//   {
//     /* code */
//     if(n%i==0){
        //not a prime  
        //reminder = 0 --> perfectly divisible
//       return false;
//     }
//   }
   //yha pe har number se divide krke dekhliya hh agar yha aagaye hh tohh koi bhi number n ko perfectly divide nhi karpaya hh
//   return true;
// }

//* 5. Print All digits of an integer
// void printDigits(int num){
//  while(num>0){
//   int lastDigit = num%10;
//   cout<<lastDigit<<endl;
//   num =num/10;
//  }
// } 


//!Doubt in this
//* 6. Create no using Digits
// void createNumber(int num){
//   int resultNumber = 0;
//  for (int i = 0; i < num; i++) {
//         int digit;
//         cout << "Enter digit " << i+1 << ": ";
//         cin >> digit;

//          Append the digit to the resulting number
//          resultNumber = resultNumber * 10 + digit;
//         resultNumber = resultNumber + round(digit*pow(10,i));
//     }






    /*****************or****************/

  
        // int placeValue = 1;
        // for (int j = 0; j < i; j++)
        // {
        //     placeValue *= 10;
        // }

  
        // resultNumber = resultNumber + digit * placeValue;
  


    

    // Print the resulting number
//     cout << "Resulting Number: " << resultNumber << endl;

// }

//* 7. Convert the Temperature
// void convertTemp(double celsius){
//     double k = celsius + 273.15;
//     double f = celsius*1.80 + 32.00;
//     cout<<"Temperatur in kelvin is: "<<k<<endl;
//     cout<<"Temperatur in Faranight is: "<<f<<endl;
// }


//* 8. Reverse an Integer
// int reverseInteger(int num){
//   int rem = 0;
//   int ans = 0;

//   if(ans< INT16_MIN){
//     return 0;
//   }

//   bool isNegative;
//   if(num < 0){
//     isNegative = true;
//     num = -num;
//   }

//   while(num>0){
//     if(ans > INT16_MAX/10){
//       return 0;
//     }
//     rem = rem%10;
//     ans = ans*10 + rem;
//     num/=10;
//   }

//   return isNegative ? -ans : ans;
// }

//* 9. Set the Kth bit to One-->1
// int setKthBitToOne(int N, int K){
//   int mask = 1<<K;
//   int ans = N | mask;
//   return ans;

//   return N | (1<<K);//change 0 to 1

   //TODO--> 0 se or kroge toh vo kuch nhi kregaa and aslso 

// }

//* 9.2 Set the Kth bit to zero-->1
// int setKthBitToZero(int N, int K){
//   int mask = 0<<K;
//   int ans = N & mask;
//   return ans;

  // return N & ~(1<<K);//change 1 to 0


  //TODO--> 1 se And krne se kuch change nhi hota hh and cannot use 0 because 0 will make every bit 0
// }


//* 10. Decimal to Binary and vice-versa
// int decimalToBinaryMethod1(int n)
// {
//    Division method
//   int binaryno = 0;
//   int i =0;
//   while (n > 0)
//   {
//     int bit = n % 2;
//     binaryno = bit*pow(10,i++) + binaryno;
//     n = n / 2;
//   }

//   return binaryno;
// }

// int decimalToBinaryMethod2(int n)
// {
//   Division method
//   int binaryno = 0;
//   int i =0;
//   while (n > 0)
//   {
//     int bit = (n & 1);
//     binaryno = bit*pow(10,i++) + binaryno;
//     n = n >> 1;
//   }

//   return binaryno;
// }


// int binaryToDecimal(int n){
//   int decimal = 0;
//   int i = 0;
//   while(n){
//     int bit = n%10;
//     decimal = bit*pow(2,i++) + decimal;
//     n = n/10;
//   }

//   return decimal;
// }



int main()
{
  //! Functions Homework

  int n;
  cout << "Enter the value of N: ";
  cin >> n;
  //* 1. Display Area of a Circle
  // float area = areaOfCircle(n);
  // cout<<"The Area of a Circle with radius "<<n<<" is: "<<area<<endl;

  //* 2. factorial of a number
  // long long int factorial = fact(n);
  // cout<<"The Factorial of "<<n<<" is: "<<factorial;

  //* 3. Check prime or not --> More Optimized
  // bool prime = checkPrime(n);
  // if(prime){
  //   cout<<n<<" is a Prime Number";
  // }else{
  //   cout<<n<<" is not a Prime Number";
  // }


  //* 4. Print All Prime Number 1 to N 
  // for (int i = 2; i <= n; i++)
  // {
  //   /* code */
  //   bool isiPrime = checkPrime(i);
  //   if(isiPrime){
  //     cout<<i<<" ";
  //   }
  // }

  //* 5. Print All digits of an integer 
  // printDigits(n);

  //* 6. Create no using Digits
  // createNumber(n);

  //* 7. Convert the Temperature
  // double c;
  // cin>>c;
  // convertTemp(c)


  //* 8. Reverse an Integer
  // reverseInteger(n);


  //* 9. Set the kth bit --> set means at the position where one(1) is present
  // int solution = setKthBitToOne(10,2);
  // int solution = setKthBitToZero(10,3);
  // cout<<solution;

  //* 10. Decimal to Binary and vice-versa
  // int binary = decimalToBinaryMethod1(n);
  // int binary = decimalToBinaryMethod2(n);
  // cout<<binary<<endl;

  // int decimal = binaryToDecimal(n);
  // cout<<decimal<<endl;

  return 0;
}