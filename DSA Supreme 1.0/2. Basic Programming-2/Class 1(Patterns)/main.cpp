#include <iostream>
using namespace std;
int main() {
    int rowcount;
    cout << "Enter the no of Rows:";
    cin >> rowcount;

    //1. Solid Diamond
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col < rowcount-row-1; col++) {
//            cout<<" ";
//        }
//
//        for (int col = 0; col <row+1 ; col++) {
//            cout<<"* ";
//        }
//
//        cout<<endl;
//    }
//
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col <row ; col++) {
//            cout<<" ";
//        }
//        for (int col = 0; col < rowcount-row-1; col++) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

    //2.Hollow Diamond
            for (int row = 0; row < rowcount; row++) {
                //spaces
                for (int col = 0; col <rowcount-row-1 ; col++) {
                    cout<<" ";
                }

                //stars
                for (int col = 0; col < 2*row+1; col++) {
                   cout<<"*";
                }

                cout<<endl;
            }
//
////         inverted hollow pyramid
//            for (int row = 0; row < rowcount; rowcount++) {
//                //spaces
//                for (int col = 0; col < row; col++) {
//                    cout<<" ";
//                }
//
//                //stars
//                for (int col = 0; col <rowcount-row-1 ; col++) {
//                    if(col == 0 || col==2*row){
//                        cout<<"*";
//                    }else{
//                        cout<<" ";
//                    }
//                }
//
//
//                cout<<endl;
//
//            }


        //3. Flipped solid Diamond
//        for (int row = 0; row < rowcount; row++) {
//            for (int col = 0; col <rowcount-row ; col++) {
//                cout<<"*";
//            }
//
//            //spaces
//            for (int col = 0; col <2*row+1 ; col++) {
//                cout<<" ";
//            }
//
//            for (int col = 0; col <rowcount-row ; col++) {
//                cout<<"*";
//            }
//
//            cout<<endl;
//        }
//
//
//        for (int row = 0; row < rowcount; row++) {
//            for (int col = 0; col <row+1 ; ++col) {
//                cout<<"*";
//            }
//
//            //spaces
//            for (int col = 0; col <2*rowcount-2*row-1 ; ++col) {
//                cout<<" ";
//            }
//
//            for (int col = 0; col <row+1 ; ++col) {
//                cout<<"*";
//            }
//
//            cout<<endl;
//        }

    //4. Fancy Pattern#2
//    for (int row = 0; row < rowcount; row++) {
//        //half pyramid
//        for (int col = 0; col < row+1; col++) {
//            cout<<row+1;
//            if(col != row){
//                cout<<"*";
//            }
//        }
//        cout<<endl;
//    }
//
//    for (int row = 0; row < rowcount; row++) {
//        // inverted half pyramid
//        for (int col = 0; col < rowcount-row; col++) {
//            cout<<rowcount-row;
//            if(col != rowcount-row-1){
//                cout<<"*";
//            }
//        }
//        cout<<endl;
//    }

    //5. Alphabet Palindrome Pyramid
//    for (int row = 0; row <rowcount ; row++) {
//        for (int col = 0;  col< row+1; col++) {
//            int ans = col+1;
//            char ch = ans + 'A' -1;
//            cout<<ch;
//        }
//
//        for (int col = row; col >0; col--) {
//            int ans = col;
//            char ch = ans + 'A'-1;
//            cout<<ch;
//        }
//        cout<<endl;
//    }
    return 0;
}