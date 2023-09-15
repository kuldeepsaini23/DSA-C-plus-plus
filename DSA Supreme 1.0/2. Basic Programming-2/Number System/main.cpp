#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryNumber(int n){
    //Division Method
//    int binaryNo = 0;
//    int i = 0;
//    while(n>0) {
//        int bit = n % 2;
//        binaryNo = bit*pow(10,i++) + binaryNo;
////        cout << bit << endl;
//        n = n / 2;
//    }
//    return binaryNo;

    //Bitwise Method
    int binaryNo = 0;
    int i=0;
    while(n>0){
        int bit = (n&1);
        binaryNo = bit*pow(10,i++) + binaryNo;
        n= n>>1;
    }
    return binaryNo;
}

int binaryToDecimalNumber(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int bit = n%10;
        decimal = decimal + bit*pow(2,i++);
        n/=10;
    }
    return decimal;
}

int main() {

    int n;
    cin>>n;
    cout<<decimalToBinaryNumber(n)<<endl;
    cout<<binaryToDecimalNumber(n);
    return 0;
}
