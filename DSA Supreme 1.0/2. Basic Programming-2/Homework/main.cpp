#include <iostream>
using namespace std;
int main() {
    int rowcount;
    cout<<"Enter the number of Rows:";
    cin>>rowcount;
   //Homework
   //1. Hollow inverted Haf Pyramid
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col < rowcount-row; ++col) {
//            if(row ==0 || row==rowcount-1 || col==0 || col== rowcount-row-1) {
//                cout << "* ";
//            }else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }

    //2.Hollow Full pyramid
//    for (int row = 0; row < rowcount; row++) {
//        //space
//        for (int col = 0; col <rowcount-1-row ; col++) {
//            cout<<"  ";
//        }
//        //stars
//        for (int col = 0; col < 2*row+1; col++) {
//
//            if(row==rowcount-1) {
//                if (col % 2 == 0) {
//                    //even
//                    cout <<"* " ;
//                } else {
//                    //odd
//                    cout << "  ";
//                }
//            }else{
//                    //columns
//                    if(col==0 || col==2*row){
//                        cout<<"* ";
//                    }else{
//                        cout<<"  ";
//                    }
//                }
//            }
//
//
//
//        cout<<endl;
//    }


    //3.Numeric Hollow Half Pyramid
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col < row+1; col++) {
//            if(col==0||col==row+1 -1|| row==rowcount-1) {
//                cout << col + 1<<" ";
//            }else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }


    //4.Numeric Hollow Inverted half Pyramid
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col <rowcount-row; col++) {
//            if(row==0 ||col==0 || row==rowcount-1 || col==rowcount-row-1) {
//                cout << row+col+1<<" ";
//            }else{
//                cout<<"  ";
//            }
//        }
//        cout<<endl;
//    }

    //5.Solid Half Diamond
     //first half - half pyramid
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col < row+1; col++) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//
//    //Second half - Inverse half pyramid
//    for (int row = 0; row < rowcount; row++) {
//        for (int col = 0; col < rowcount-row; col++) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

    //7.Floyd's Triangle Pattern
//    int number = 1;
//    for (int row = 0; row < rowcount; row++) {
//
//        for (int col = 0; col < row+1; col++) {
//
//            cout<<number<<" ";
//            number++;
//        }
//
//        cout<<endl;
//    }

    //8. Numeric Palindrome Equilateral triangle
//    for (int row = 0; row <rowcount ; row++) {
//        //spaces
//        for (int col = 0; col <rowcount-row-1 ; col++) {
//            cout<<"  ";
//        }
//
//        //half pyramid
//        for (int col = 0; col < row+1; col++) {
//            cout<<col+1<<" ";
//        }
//
//        //reverse number pyramid
//        for (int col = row+1; col > 1; col--) {
//            cout<<col-1<<" ";
//        }
//        cout<<endl;
//    }

    //9.Fancy pattern#1
//    for (int row = 0; row < rowcount; row++) {
//        //Printing stars before
//        for (int col = 0; col < rowcount-row+3; col++) {
//            cout<<"* ";
//        }
//
//        //phele kar rkha tha itna
//        for (int col = 0; col <row+1; col++) {
//            cout<<row+1<<" ";
//            if(row!= col)
//                cout<<"* ";
//        }
//
//        //Printing stars after
//        for (int col = 0; col < rowcount-row+3; col++) {
//            cout<<"* ";
//        }
//
//        cout<<endl;
//    }

    //10 Fancy pattern 3
        //upper half
     for (int row = 0; row < rowcount; row++) {
         cout<<"* ";
         for (int col = 0; col < row; col++) {
             cout<<col+1<<" ";
         }

         for (int col = row; col >1 ; col--) {
             cout<<col-1<<" ";
         }

        if(row>0){
            cout<<"* ";
        }
        cout<<endl;
     }

        //lower half
    for (int row = 0; row < rowcount-1; row++) {
        cout<<"* ";
        for (int col = 0; col < rowcount-row-2; col++) {
            cout<<col+1<<" ";
        }

        for (int col = rowcount-row-2; col >1; col--) {
            cout<<col-1<<" ";
        }

        if(row < rowcount-2) {
            cout << "* ";
        }
        cout<<endl;
    }

    //11.Fancy Pattern#2
//    int n =1;
//    //upper half
//    for (int row = 0; row < rowcount; row++) {
//
//        for (int col = 0; col < row+1; ++col) {
//            cout<<n<<" ";
//            n++;
//            if(row!=col){
//                cout<<"* ";
//            }
//
//        }
//        cout<<endl;
//    }

    //Lower half
    //n=11
//    int start = n-rowcount;
//    for (int row = 0; row < rowcount; row++) {
//        int k =start;
//        for (int col = 0; col < rowcount-row; col++) {
//            cout<<k<<" ";
//            k++;
//            if(col< rowcount-row-1) {
//                cout << "* ";
//            }
//        }
//        start = start-(rowcount-row-1);
//        cout<<endl;
//    }

    //lowerhalf

    //12.Pascal Triangle Pattern

//    for (int row = 1; row <= rowcount; row++) {
//        int no=1;
//        for (int col = 1; col <=row; col++) {
//            cout<<no<<" ";
//            no= no*(row-col)/col;
//        }
//        cout<<endl;
//    }

    //13. Butterfly pattern
     //Upper half
//    for (int row = 0; row <rowcount ; row++) {
//        //half pyramid
//        for (int col = 0; col < row+1; col++) {
//            cout<<"* ";
//        }
//        //spaces
//        for (int col = 0; col < 2*(rowcount-row-1); ++col) {
//            cout<<"  ";
//        }
//        //half pyramid
//        for (int col = 0; col < row+1; ++col) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }
//     //Lower half
//    for (int row = 0; row <rowcount ; row++) {
//        //half pyramid
//        for (int col = 0; col < rowcount-row; col++) {
//            cout<<"* ";
//        }
//        //spaces
//        for (int col = 0; col < 2*(row); ++col) {
//            cout<<"  ";
//        }
//        //half pyramid
//        for (int col = 0; col < rowcount-row; ++col) {
//            cout<<"* ";
//        }
//        cout<<endl;
//    }

    return 0;
}
