#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  int num = n / 2;

  //* 1. Full Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < n-row-1; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < row+1; cols++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }

  //   cout<<endl;
  // }

  //* 2. Inverted Full Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < row; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < n-row; cols++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }

  //   cout<<endl;
  // }

  //* 3. Diamond Pattern
  //   for (int row = 0; row < num; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < num-row-1; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < row+1; cols++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }

  //   cout<<endl;
  // }
  // for (int row = 0; row < num; row++)
  // {

  //   /* Spaces */
  //   for (int cols = 0; cols < row; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < num-row; cols++)
  //   {
  //     /* code */
  //     cout<<"* ";
  //   }

  //   cout<<endl;
  // }

  //* 4. hollow Full Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < n-row-1; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < row+1; cols++)
  //   {
  //     /* code */
  //     if(cols == 0 || cols == row){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }

  //   }

  //   cout<<endl;
  // }

  //* 5. Inveretd hollow Full Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < row; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < n-row; cols++)
  //   {
  //     /* code */
  //     if(cols == 0 || cols == n-row-1){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }

  //   }

  //   cout<<endl;
  // }

  //* 6. Hollow Diamond
  // for (int row = 0; row < num; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < num-row-1; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < row+1; cols++)
  //   {
  //     /* code */
  //     if(cols == 0 || cols == row){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }

  //   }

  //   cout<<endl;
  // }

  // for (int row = 0; row < num; row++)
  // {
  //   /* Spaces */
  //   for (int cols = 0; cols < row; cols++)
  //   {
  //     /* code */
  //     cout<<" ";
  //   }

  //   /*Stars*/
  //   for (int cols = 0; cols < num-row; cols++)
  //   {
  //     /* code */
  //     if(cols == 0 || cols == num-row-1){
  //       cout<<"* ";
  //     }else{
  //       cout<<"  ";
  //     }

  //   }

  //   cout<<endl;
  // }

  //* 7. Flipped Solid Diamond

  // for (int row = 0; row < num; row++)
  // {

  //   //*Upper half
  //   /* Inverted half pyramid 1 */
  //   for (int col = 0; col < num - row; col++)
  //   {
  //     /* code */
  //     cout << "*";
  //   }

  //   /* Full pyramid 1 */
  //   for (int col = 0; col < 2 * row + 1; col++)
  //   {
  //     /* code */
  //     cout << " ";
  //   }

  //   /* Inverted half pyramid 1.2 */
  //   for (int col = 0; col < num - row; col++)
  //   {
  //     /* code */
  //     cout << "*";
  //   }
  //   cout << endl;
  // }

  // //*Lower half
  // for (int row = 0; row < num; row++)
  // {
  //   /*  half pyramid 1 */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << "*";
  //   }

  //   /* Full pyramid 1 */
  //   for (int col = 0; col < 2 * num - 2 * row - 1; col++)
  //   {
  //     /* code */
  //     cout << " ";
  //   }

  //   /*  half pyramid 1.2 */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << "*";
  //   }

  //   cout<<endl;
  // }

  //* 8.

  // for (int row = 0; row < n; row++)
  // {
  //   /* code */
  //   for (int col = 0; col < 2 * row + 1; col++)
  //   {
  //     /* code */
  //     if (col % 2 == 0)
  //     {
  //       cout << row + 1;
  //     }
  //     else
  //     {
  //       cout << "*";
  //     }
  //   }
  //   cout << endl;
  // }

  // ************************or*******************************
  //  for (int row = 0; row < n; row++)
  // {
  //   /* code */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << row + 1;
  //     if(col == row){
  //       cout<<" ";
  //     }else{
  //       cout<<"*";
  //     }
  //   }
  //   cout << endl;
  // }


//* 9.
  // for (int row = 0; row < n; row++)
  // {
  //   /* code */
  //   for (int col = 0; col < row + 1; col++)
  //   {
  //     /* code */
  //     cout << row + 1;
  //   }
  //   cout << endl;
  // }

  //* 10. Hollow Inverted half Pyramid
  // for (int row = 0; row < n; row++)
  // {
  //   /* code */
  //   for (int col = 0; col < n-row; col++)
  //   {
  //     /* code */
  //     if(row == 0 || row == n-1){
  //       cout<<"* ";
  //     }else{
  //       if(col == 0 || col == n-row-1){
  //         cout<<"* ";
  //       }else{
  //         cout<<"  ";
  //       }
  //     }
      
  //   }
  //   cout<<endl;
  // }

  //* 11.
  for (int row = 0; row < n; row++)
  {
    /* code */
    for (int col = 0; col < row+1; col++)
    {
      /* code */
      if(row==0 || row== n-1){
        cout<< col+1<<" ";
      }else{
        if(col == 0 || col == row){
          cout<<col+1<<" ";
        }else{
          cout<<"  ";
        }
      }
    }
    cout<<endl;
    
  }
  
  //* 12. 
  char ch = 97;
  for (int row = 0; row < n; row++)
  {
    char ch;
    /* code */
    for (int col = 0; col < row+1; col++)
    {
      /* code */
      int number = col+1;
       ch = number +'A' - 1;
      cout<<ch<<" "; 
    }

    //jab tak A tk nhi jate tab tak print kregne
    for(char alphabet = ch; alphabet>'A';){
      alphabet--;
      cout<<alphabet<<" ";
    }
    cout<<endl;
  }
  

  return 0;
}