#include <iostream>
#include<math.h>
#include<limits.h>
using namespace std;

//* Perfect Square
int numSquaresHelper(int n)
{
  // Base Case
  if (n == 0)
    return 1;
  if (n < 0)
  { // Because n - perefctSquare <0
    return 0;
  }

  // Processing
  int i = 1;
  int ans = INT_MAX;
  int end = sqrt(n);
  while (i <= end)
  {
    int perfectSquare = i * i;
    // Recrusion
    int noOfPerfectSquare = 1 + numSquaresHelper(n - perfectSquare);
    if (noOfPerfectSquare < ans)
    {
      ans = noOfPerfectSquare;
    }
    ++i;
  }

  return ans;
}

int numSquares(int n)
{
  return numSquaresHelper(n) - 1;
}

int main()
{
  int n=13;
  cout<<numSquares(n);
  return 0;
}