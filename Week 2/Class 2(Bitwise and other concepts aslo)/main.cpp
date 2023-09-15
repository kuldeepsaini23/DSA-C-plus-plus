#include <iostream>
using namespace std;

//--> Global Variable --> Bad Practice
int age = 20;

int main()
{
  //! Bitwise operators

  //  int a = 2;
  //  int b = 3;

  //  cout<<(a&b)<<endl;
  //  cout<<(a|b)<<endl;
  //  cout<<(~a)<<endl;
  //  cout<<~(a)<<endl;
  //  cout<<(a^b)<<endl;

  //! Left shift
  // int a = 10;
  // cout<<(a<<1)<<endl;
  // cout<<(a<<2)<<endl;

  //! Right Shift (Signed)
  // int n = 10;
  // cout<<(n>>1)<<endl;
  // cout<<(n>>2)<<endl;

  //* Unsigned --> Positive Number
  // unsigned int n2 = 10;
  // cout<<(n2>>1)<<endl;

  //*Garbage Value --> -ve shift
  // cout<<(a>> -1)<<endl;
  // cout<<(a<< -1)<<endl;

  //! Pre/Post Increment and Decrement
  // int a = 10;
  // cout<<a++<<endl;
  // cout<<++a<<endl;
  // cout<<(a--)<<endl;
  // cout<<(--a)<<endl;

  // cout<<++a<<endl;
  // cout<<a++<<endl;
  // cout<<(--a)<<endl;
  // cout<<(a--)<<endl;

  //! cout<<(--a++)<<endl;--> Wrong
  //* cout<<--(--a)<<endl;--Correct

  //! Break adn Continue
  // for (int i = 0; i < 5; i++)
  // {
  //   /* code */
  //   if (i == 1)
  //   {
  //     continue;
  //   }
  //   cout << i << endl;
  //   if (i == 3)
  //     break;
  // }

  // for (int i = 0; i <= 5; i++)
  // {
  //   /* code */
  //   cout<<"Hello jee"<<endl;
  //   continue;
  //   cout<<"Kaise Ho sare"<<endl;
  // }
  
  //! Variable Scoping
  // int a = 5; //--> intialization
  // int b; //--> Declare

  // a = 25; //--> Updation
  // cout<<a<<endl;

  //int a = 25; --> cannot Redefine a variable

  // if(true){
  //   cout<<"inside if number 1"<<endl;
  //   int a =202;
  //   if(true){
  //     cout<<"inside if number 2 "<<endl;
  //     cout<<a<<endl;
  //   }
  // }

  // if(true){
  //   cout<<"inside if number 1"<<endl;
  //   int a =202;
  //   if(true){
  //     cout<<"inside if number 2 "<<endl;
  //     int a =303;
  //     cout<<a<<endl;
  //   }
  // }

  // cout<<age<<endl;

  //!operator Precendence --> to avoid this use Brackets


  int a = 10;
  // cout<<++a*a++;
  int b = 10;
  cout<<++a*b++;

  return 0;
}