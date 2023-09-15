#include <iostream>
using namespace std;

// char ch = 'A';//global variable(Variable Scoping)
int main() {
//    int rowcount;
//    cout<<"Enter the numbers of Rows:";
//    cin>>rowcount;
  //1.Numeric Full Pyramid
//    for (int row = 0; row < rowcount; row++) {
//
//        //Spaces
//        for (int col = 0; col < rowcount-row-1; ++col) {
//            cout<<"  ";
//        }
//
//        //Half pyramid
//        for (int col = 0; col < row+1; col++) {
//            cout<<row+1+col<<" ";
//        }
//
//        //last/3rd Half
//        for (int col = 0; col < row; col++) {
//            cout<<2*row-col<<" ";
//        }
//        cout<<endl;
//    }

        //2. Numeric hollow Pyramid
//        for (int row = 0; row < rowcount; row++) {
//            //spaces
//            for (int col = 0; col < rowcount-row-1; col++) {
//                cout<<" ";
//            }
//
//            //numbers with spaces
//            int start =1;
//            for (int col = 0; col < 2*row+1; col++) {
//                //first row and last row
//                if(row==0 || row==rowcount-1){
//                    if(col%2 ==0){
//                        //even
//                        cout<<start;
//                        start++;
//                    }else{
//                        //odd
//                        cout<<" ";
//                    }
//
//                }else{
//                    //First or last column
//                    if(col==0){
//                        cout<<1;
//                    }else if(col==2*row+1-1) {
//                        cout << row + 1;
//                    }else{
//                        cout<<" ";
//                    }
//                }
//            }
//
//            cout<<endl;
//        }

        //Bitwise Operator
//            bool a = false; //value = 0
//            bool b = false;
//            cout<<(a&b);
//            cout<<(a|b);
//            cout<<(a^b);
//            cout<<(~a);

    //Left Shift and Right Shift Operator
//    int a =12;
//      a= a<<1;
//      a = a>>2;
//    cout<<a<<endl;

    //Increment and Decrement
//    int a= 5;
//    cout<<a++<<endl;
//    cout<<a--<<endl;
//    cout<<a;

//      cout<<(++a)*(++a);

    //Break keyword
//    for (int i = 0; i < 5; i++) {
//        cout<<"Kuldeep ";
//        break;
//    }
//    cout<<"Saini"<<endl;
//
//      Continue
//    for (int i = 0; i < 5; i++) {
//        continue;
//        cout<<"Kuldeep ";
//    }
//    cout<<"Saini";

    //Variable Scoping

    //decalaration
//    int a;
    //intiailization
//    int b=5;
    //updation
//    b=10;
//
//    if(true){
//        int b = 15;
//        cout<<b<<endl;
//    }
//    cout<<b<<endl;
//    cout<<ch<<endl;
//    ch = 'B';
//    cout<<ch;

    //Operator Precedence
    //Done Page no-56

    int val;
    cout<<"Enter the value of val";
    cin>>val;
    switch (val) {
        case 1: cout<<"Monday";
            break;

        case 2: cout<<"Friday";
            break;

        default: cout<<"Sunday";
    }
    return 0;
}
