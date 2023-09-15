#include <iostream>
using namespace std;
int main() {

    //if else
    //declare a integer type variable
//    int score;
//    //Print Enter the score
//    cout<<"Enter the score"<<endl;
//    //Taking the input
//    cin>>score;
//    if(score<300){
//        cout<<"India Wins"<<endl;
//    }else{
//        cout<<"Pak wins";
//    }

//if elseif
//    int marks;
//    cout<<"Enter the marks"<<endl;
//    cin>>marks;
//    if(marks>=80){
//        cout<<"A grade";
//    }else if(marks>=60){
//        cout<<"B grade";
//    }else if(marks>=40){
//        cout<<"C grade";
//    }else{
//        cout<<"D grade";
//    }

//Loops
//    for (int i = 1; i <= 10; i++) {
//        cout<<2*i<<endl;
//    }

//    for (int i = 0; i <=5 ; i=i+2) {
//        cout<<i<<endl;
//    }

//    for (int i = 1; i <10 ; i=i*2) {
//        cout<<i<<endl;
//    }

//    for (int i = 100; i>0 ; i=i/2) {
//        cout<<i<<endl;
//    }

//    for (int i = 5; (i>=0 && i<=10) ; i++) {
//        cout<<i<<endl;
//    }

//    int i =0;
//    for ( ; ;) {
//        if(i<5){
//            cout<<i<<endl;
//            i=i+1;
//        }
//    }

//    int n;
//    if (cin >> n) {
//        cout << "kuldeep Saini";
//    }

//    int n;
//    if (cout <<"kuldeep") {
//        cin >> n;
//    }

    //Patterns
    int rowcount, columnCount;
    cout<<"Enter the Number of rowcount:";
    cin>>rowcount;
    cout<<"Enter the Number of columnCount:";
    cin>>columnCount;
    //1. Solid Rectangle
//    for (int i = 1; i <=3 ; i++) {
//        for (int j = 1; j <=5 ; j++){
//            cout<<"* ";
//        }
//
//        cout<<endl;
//    }

    //2. Solid Square
//    for (int i = 0; i <n ; i++) {
//        for (int j = 0; j <n ;j++){
//            cout<<"*   ";
//        }
//
//        cout<<endl;
//    }

//Now use i--> row and j--> column
    //3. Hollow Rectangle
//    for (int row = 0; row <rowcount; row++) {
//        for (int col = 0; col < columnCount ; col++) {
//            if (row == 0 || row == rowcount-1 || col == 0 || col == columnCount-1) {
//                cout << "* ";
//            } else {
//                cout << "  ";
//            }
//        }
//        cout<<endl;
//    }

    //4. Half Pyramid
//    for (int row = 0; row <rowcount ; row++) {
//        for (int col = 0; col <row+1; col++) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

    //5. Inverted Half Pyramid
//    for (int row = 0; row <rowcount ; row++) {
//        for (int col = 0; col <rowcount-row; col++) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

    //5. Numeric Half Pyramid
//    for (int row = 0; row <rowcount ; row++) {
//        for (int col = 0; col <row+1; col++) {
//            cout<<col+1;
//        }
//        cout<<endl;
//    }

    //6. Inverted Numeric Half Pyramid
//    for (int row = 0; row <rowcount ; row++) {
//        for (int col = 0; col <rowcount-row; col++) {
//            cout<<col+1<<" ";
//        }
//        cout<<endl;
//    }

    //7. Pyramid
//    for (int row = 0; row <rowcount ; row++) {
//        for (int col = 0; col <rowcount-row; ++col) {
//            cout<<" ";
//        }
//        for (int col = 0; col <row+1 ; col++) {
//            cout<<"* ";
//        }
//
//        cout<<endl;
//    }

    //8. Inverted Pyramid
    for (int row = 0; row <rowcount ; row++) {
        for (int col = 0; col <row+1 ; col++) {
            cout<<" ";
        }
        for (int col = 0; col <rowcount-row; ++col) {
            cout<<"* ";
        }


        cout<<endl;
    }
}
