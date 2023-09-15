#include <iostream>
using namespace std;

int main()
{

  int n;
  cout << "Enter the valye of N: ";
  cin >> n;
  int num = n / 2;

  //* 1. Numeric Hollow Half Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* code */
  //   for (int col = 0; col < n-row; col++)
  //   {
  //     /* code */
  //     if(row==0 || row==n-1){
  //       cout<<row+col+1<<" ";
  //     }else{
  //       if(col==0 || col==n-row-1){
  //         cout<<row+col+1<<" ";
  //       }else{
  //         cout<<"  ";
  //       }
  //     }
  //   }

  //   cout<<endl;

  // }

  //* 2. Numeric palindrom equilateral Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   int number;
  //   /* spaces */
  //   for (int col = 0; col < n-row-1; col++)
  //   {

  //     cout<<"  ";
  //   }

  // haflPyramid
  //   for (int col = 0; col < row+1; col++)
  //   {
  //     /* code */
  //      number = col+1;
  //     cout<<number<<" ";
  //   }

  // Reverse number printing
  //   for (int i = number; number > 1;)
  //   {
  //     /* code */
  //     number--;
  //     cout<<number<<" ";
  //   }

  //   cout<<endl;

  // }

  //* 3. Solid Half Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* code */
  //   for (int col = 0; col < row+1; col++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //    for (int row = 1; row < n; row++) {
  //      for (int col = 0; col < n-row; col++) {
  //          cout<<"* ";
  //      }
  //      cout<<endl;
  //  }

  //* 4. Floyd's Triangle
  // int number = 1;
  // for (int row = 0; row < n; row++)
  // {

  //   /* code */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << number << " ";
  //     number++;
  //   }

  //   cout << endl;
  // }

  //* 5. Butterfly Pattern
  //* Upper half
  // for (int row = 0; row < num; row++)
  // {

  //   /* half Pyramid 1 */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << "* ";
  //   }

  //   /* Spaces full Pyramid */
  //   for (int col = 0; col < 2 * num - 2 * row - 2; col++)
  //   {
  //     /* code */
  //     cout << "  ";
  //   }

  //   /* half Pyramid 2 */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << "* ";
  //   }

  //   cout << endl;
  // }

  // //* Lower half
  // for (int row = 0; row < num; row++)
  // {

  //   /* half Pyramid 1 */
  //   for (int col = 0; col < num - row; col++)
  //   {
  //     /* code */
  //     cout << "* ";
  //   }

  //   /* Spaces full Pyramid */
  //   for (int col = 0; col < 2 * row; col++)
  //   {
  //     /* code */
  //     cout << "  ";
  //   }

  //   /* half Pyramid 2 */
  //   for (int col = 0; col < num - row; col++)
  //   {
  //     /* code */
  //     cout << "* ";
  //   }

  //   cout << endl;
  // }

  //* 6.
  // for (int row = 0; row < n; row++)
  // {
  //   /* stars 1*/
  //   for (int col = 0; col < 2*n - row -2; col++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }

  //   /* Number and star half pyramid */
  //   for (int col = 0; col < row+1; col++)
  //   {
  //     /* code */
  //     cout << row + 1<<" ";
  //     if(col == row){
  //       cout<<"";
  //     }else{
  //       cout<<"* ";
  //     }
    
  //   }

  //   /* stars 2 */
  //   for (int col = 0; col < 2*n - row -2; col++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }

  //* 7.
   for (int row = 0; row < num; row++)
  {
    /* code */
    for (int col = 0; col < row + 1; col++)
    {
      /* code */
      cout << row + 1<<" ";
      if(col == row){
        cout<<"  ";
      }else{
        cout<<"* ";
      }
    }
    cout << endl;
  }

  for (int row = 1; row < num; row++)
  {
    /* code */
    for (int col = 0; col < num-row; col++)
    {
      /* code */
      cout<<num-row<<" ";
        if(col == num-row-1){
        cout<<"  ";
      }else{
        cout<<"* ";
      }
    }
    cout<<endl;
  }
  /*************************Or********************/
    for (int row = 0; row < num; row++)
  {
    /* code */
    for (int col = 0; col < num-row-1; col++)
    {
      /* code */
      cout<<num-row-1<<" ";
      if(col == num-row-2){
        cout<<"  ";
      }else{
        cout<<"* ";
      }
    }
    cout<<endl;
  }
  
  
  

  return 0;
}