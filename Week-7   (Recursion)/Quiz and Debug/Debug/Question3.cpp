#include <iostream>
using namespace std;

//* Debug the code.
int subset(int input[], int n, int output[][50], int k)
{
  if (n == 0)
  {
    output[0][0] = 0;
    return 1;
  }

  int small = subset(input + 1, n - 1, output, k);
  int count = 0;

  for (int i = 0; i < small; i++)
  {
    output[small + count][1] = input[0];
    int sum = input[0];
    int l = 0;
    for (int j = 2; output[small - count - 1][j - 1] != 0; j++)
    {
      l++;
      output[small + count][j] = output[small - count - 1][j - 1];
      sum = sum + output[small - count - 1][j - 1];
    }
    output[small + count][0] = -1;
    if (sum == k)
    {
      output[small + count][0] = l + 1;
    }
    count++;
  }
  return small + count;
}

int subsetSumToK(int input[], int n, int output[][50], int k)
{
  int temp[1110000][50];
  int size = subset(input, n, temp, k);
  int m = 0;
  for (int i = 0; i < size; i++)
  {
    if (temp[i][0] > 0)
    {
      for (int j = 0; j < temp[i][0]; j++)
      {
        output[m][j] = temp[i][j];
      }
    }
  }

  return m;
}

int main()
{

  return 0;
}