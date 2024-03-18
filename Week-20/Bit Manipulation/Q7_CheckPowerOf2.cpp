#include <iostream>
using namespace std;

bool checkPowerOf2(int n)
{
  int count = 0;

  while (n != 0)
  {
    int lastbit = n & 1;
    if (lastbit)
    {
      break;
    }
    else
    {
      count++;
    }
    n = n >> 1;
  }

  if (count > 0)
  {
    //Count tell me the power of 2
    cout << count << endl;
    return true;
  }

  return false;
}

//* Method 2 remove last set bit
bool fastCheckPowerOf2(int n){
  if(n & (n-1) == 0){
    return true;
  }
  return false;
}

int fastCountSetBit(int n){
  int count = 0;
  while(n!=0){
    count ++;
    //count tells me the no of set bit
    n = (n & (n-1));
  }
  return count;
}

int main()
{
  int n = 1024;
  // bool ans = checkPowerOf2(n);

  // bool ans = fastCheckPowerOf2(n);

  // if (ans)
  // {
  //   cout << "True" << endl;
  // }
  // else
  // {
  //   cout << "False" << endl;
  // }

  int ans = fastCountSetBit(n);
  cout << ans;

  return 0;
}