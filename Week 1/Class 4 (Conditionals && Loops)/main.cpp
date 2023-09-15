#include <iostream>
using namespace std;

int main()
{

  //! Loops

  //*Nested Loop
  // for (int i = 0; i < 3; i++)
  // {
  //   /* code */
  //   cout<<"Outer Loop "<<i<<endl<<endl;
  //   for (int j = 0; j < 3; j++)
  //   {
  //     /* code */
  //     cout<<"Inner Loop "<<j<<endl;
  //   }
  //   cout<<endl;
  // }

  //* For Loop
  // for (int i = 10; i >= 1; i -= 2)
  // {
  //   /* code */
  //   cout << i << endl;
  // }

  // for (int i = 2; i <= 10; i += 2)
  // {
  //   /* code */
  //   cout << i << endl;
  // }
  // for (int i = 1; i <=10; i++)
  // {
  //   /* code */
  //   cout<<i<<endl;
  // }

  // for (int i = 10; i <=12; i++)
  // {
  //   /* code */
  //   cout<<"Kuldeep Saini"<<endl;
  // }

  //! Conditionals
  // int num = 10;

  //* Even or odd
  // if(num%2==0){
  //   cout<<"Number is Even";
  // }else{
  //   cout<<"Number is Odd";
  // }

  //* Postive negative and zero
  // if (num > 0)
  // {
  //   cout << "positive";
  // }
  // else if (num < 0)
  // {
  //   cout << "Negative";
  // }
  // else
  // {
  //   cout << "zero";
  // }

  //*Questions on Loops

  // 1. Print 11 times name
  //  for (int i = 0; i <= 10; i++)
  //  {
  //    /* code */
  //    cout<<"Kuldeep Saini"<<endl;
  //  }

  // 2. Print 19 table
  //  for (int i = 1; i <= 10; i++)
  //  {
  //    /* code */
  //    cout<<"19 * "<<i<<" = "<<19*i<<endl;
  //  }

  // 3. Even number from 0 to 100
  //  for (int i = 0; i <= 100; i++)
  //  {
  //    /* code */
  //    if(i%2==0){
  //      cout<<i<<endl;
  //    }

  // }

  //! Patterns

  //* 1.Square
  // for (int i = 0; i < 4; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < 4; j++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //* 2. Rectangle
  // for (int i = 0; i < 4; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < 5; j++)
  //   {
  //     /* code */
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  int Rows = 10;
  int Cols = 7;

  //* 3. Hollow Rectangle
  // for (int row = 0; row < Rows; row++)
  // {
  //   /* code */
  //   for (int cols = 0; cols < Cols; cols++)
  //   {
  //     /* code */
  //     if (row == 0 || row == Rows-1)
  //     {
  //       cout << "* ";
  //     }else{
  //       if(cols==0||cols==Cols-1){
  //         cout<<"* ";
  //       }else{
  //         cout<<"  ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }

  //* 4. Pyramid
  // for (int i = 0; i < 5; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < i+1; j++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }
  //   cout<<endl;

  // }

  int n;
  cin >> n;
  //* 5. Inverted Half Pyramid
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < n-i; j++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }
  //   cout<<endl;

  // }

  //* 6. Numeric half Pyramid
  // for (int i = 0; i < 5; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < i + 1; j++)
  //   {
  //     /* code */
  //     cout << j+1<<" ";
  //   }
  //   cout << endl;
  // }


  //* 5. Inverted Numeric Half Pyramid
  // for (int i = 0; i < n; i++)
  // {
  //   /* code */
  //   for (int j = 0; j < n-i; j++)
  //   {
  //     /* code */
  //     cout<<j+1<<" ";
  //   }
  //   cout<<endl;

  // }





  return 0;
}