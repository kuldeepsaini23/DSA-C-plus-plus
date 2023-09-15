#include <iostream>
#include <cmath>
using namespace std;

//1. Area of the circle
float areaOfCircle(float r){
    return 3.14*r*r;
}

//2.Number is Even or odd
void evenOrOdd(int x){
    if(x%2 == 0){
        cout<<"Number is Even";
    }else{
        cout<<"Number is Odd";
    }
}

//3.Factorial
int fatorial(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

//4. Celsius to Faraheniet
float changeTemp(float a){

    float far = (a*((float )9/5)) + 32;

    return far;
}

//5. check if number is prime or not
bool checkPrime(int n){
    for (int i = 2; i<=sqrt(n) ; i++) {
        if(n%i==0){
            return false;
        }
    }
    return true;
}

//7. Reverse an Integer
int reverseInteger(int n){
    int ans = 0;
    while(n>0){
        ans =  ans + pow(10)
    }
}

//8. Reverse Interger in leet code
//9. In set ith bit

int main() {
    //1. Area of the circle
//    float r;
//    cout<<"Enter the radius of the circle:";
//    cin>>r;
//    cout<<areaOfCircle(r);

    //2.Number is Even or odd
//    int n;
//    cout<<"Enter the Number:";
//    cin>>n;
//    evenOrOdd(n);

    //3.Factorial
//    int n;
//    cin>>n;
//    cout<<fatorial(n);


    //4. Celsius to Faraheniet
//    float c;
//    cout<<"enter temp in celieus";
//    cin>>c;
//    cout<<changeTemp(c);

    //5. check if number is prime or not
//    int n;
//    cout<<"Enter the number: ";
//    cin>>n;
//    bool isPrime = checkPrime(n);
//    if(isPrime){
//        cout<<"The number is Prime Number";
//    }else{
//        cout<<"The number is not a Prime Number";
//    }

    //6. Print prime number from one to n
//    int n;
//    cout<<"Enter the number: ";
//    cin>>n;
//    for(int i=1; i<=n; i++){
//        bool isPrime = checkPrime(i);
//        if(isPrime){
//            cout<<i<<" ";
//        }
//    }

    //7. Reverse an Integer
    int n;
    cout<<"Enter the number: ";
    cin>>n;

      return 0;

}
