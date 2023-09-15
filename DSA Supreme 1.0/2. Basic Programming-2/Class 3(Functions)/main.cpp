#include <iostream>
using namespace std;

void printName(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for (int i = 0; i < 5; ++i) {
        cout<<"Kuldeep saini"<<endl;
    }
}

void printNumber(int a){
    cout<<a;
}

//Function which add two numbers
//int getSum(int x, int y){
////    return a+b;
//    int result = x+y;
//    return result;
//}

//Find max of three numbers
//int max(int x, int y, int z){
//    if(x>y){
//        if(x>z){
//            return x;
//        }else{
//            return z;
//        }
//    }else{
//        if(y>z){
//            return y;
//        }else{
//            return z;
//        }
//    }
//
//}


//Counting from 1 to N
//void countingToN(int x){
//    for (int i = 1; i <= x ; ++i) {
//        cout<<i<<endl;
//    }
//}

//Student Grade and Problem
//char grade(int x){
//    if(x>=90){
//        return 'A';
//    }else if(x>=80){
//        return 'B';
//    }else if(x>=70){
//        return 'C';
//    }else if(x>=60){
//        return 'D';
//    }else{
//        return 'E';
//    }

//    switch (x/10) {
//        case 10 :
//        case 9 : return 'A' ; break;
//        case 8 : return 'B' ; break;
//        case 7 : return 'C' ; break;
//        case 6 : return 'D' ; break;
//        default: return  'E';
//     }
//}

//Sum of Even Number upto N
int evenSum(int x){
    int sum = 0;
//    for (int i = 1; i <= x; i++) {
//        if(i%2 == 0){
//        sum+=i;
//        }
//    }
//          OR
    for (int i = 2; i <= x; i= i+2) {
       sum = sum + i;
    }
    return sum;
}

int main(){

//    int n;
//    cout<<"Enter the value of n: ";
//    cin>>n;
//    for (int i = 0; i < 5; ++i) {
//        cout<<"Kuldeep saini"<<endl;
//    }

//printName();

//    int a;
//    printNumber(a);

    //Function which add two numbers
//    int a, b;
//    cout<<"Enter the Value of a "<<endl;
//    cin>>a;
//    cout<<"Enter the Value of a "<<endl;
//    cin>>b;
//    int sum = getSum(a,b);
//    cout<<"The Addition of two number is "<<sum;

    //Find max of 3 numbers
//    int a, b,c;
//    cout<<"Enter the Value of a "<<endl;
//    cin>>a;
//    cout<<"Enter the Value of b "<<endl;
//    cin>>b;
//    cout<<"Enter the Value of c "<<endl;
//    cin>>c;
//    int maximum = max(a,b,c);
//    cout<<"The Maximum of Three number is: "<<maximum;

    //Counting from 1 to N
//    int n;
//    cout<<"Enter the value of n "<<endl;
//    cin>>n;
//    countingToN(n);

    //Student Grade and Problem
//    int n;
//    cout << "Enter the value of n " << endl;
//
//    cin>>n;
//    while(n>=100) {
//        cin >> n;
//        cout<<"Number is Greater than 100 Retype the number"<<endl;
//    }
//    cout<<"Your Grade is: "<<grade(n);

    //Sum of even number upto N
    int n;
    cout << "Enter the value of n " << endl;
    cin>>n;
    int ans = evenSum(n);
    cout<<"Even Sum is "<< ans<<endl;

    return 0;

}
