#include <iostream>
using namespace std;

int main() {
// Conditional operator
//    int age = 100;
//
//
//    (age>=18) ? cout<<"Can vote": cout<<"Cannot vote";

//Pre and post
//    int a=5;
//    int b=10;
//
//    int ans1 = (++a)*(--b);
//    int ans2 = (++a)*(b--);
//    int ans3 = (a++)*(--b);
//    int ans4 = (a++)*(b--);
//    cout<<ans1<<endl<<ans2<<endl<<ans3<<endl<<ans4<<endl;

//   Functions Questions
    //1. Print digits of a number
//    int n =567;
//    while(n!=0){
//        int rem = n%10;
//        cout<<rem<<", ";//giving output 7, 6, 5 but we want output as 5, 6, 7
//        n/=10;
//    }

//    int n = 567;
//    int numDigits = 0;
//    int temp = n;

// Count the number of digits in n
//    while (temp != 0) {
//        temp /= 10;
//        ++numDigits;
//    }

// Extract the digits from n and print them in the desired order
//    while (numDigits > 0) {
//        int divisor = pow(10, numDigits-1);
//        int digit = n / divisor;
//        cout << digit << ", ";
//        n %= divisor;
//        --numDigits;
//    }

    //2. digit to number
//    int digit[] = {8,2,3,7};
//    int ans = 0;
//    for (int i = 0; i < 4; ++i) {
//        ans = ans * 10 + digit[i];
//    }
//
//    cout<<ans;

    //3. Number of set bit
    int n = 7;
    int ans = 0;
    while(n != 0){
        if(n & 1){
            //found one set bit, so increment setbit count
            ans++;
        }
//        Mile ya na mile toh n ko right shift kardo
        n = n>>1;
    }
//
//    cout<<"The Number of set bit is: "<<ans;

    //4. km to miles
    int n = 5;
    float miles = (int)(n/1.6);
    cout<<miles;

    return 0;
}
