#include <iostream>
#include <deque>
using namespace std;

//* Print First Negative
// can laso this question queue
void printFirstNegative(int *arr, int n, int k)
{
  deque<int> dq;

  //*process first k elements
  for (int i = 0; i < k; i++)
  {
    /* code */
    int element = arr[i];
    if (element < 0)
    {
      dq.push_back(i);
    }
  }

  //*Process Remaining Window --> removal and addition of indexes
  for (int index = k; index < n; index++)
  {
    /* aage padhne se phele purnai window ka answer nikal do */
    if (dq.empty())
    {
      cout << "0" << endl;
    }
    else
    {
      cout << arr[dq.front()] << " ";
    }

    //*Removal - jo bhi index out of range hh usko queue me se remove krdo
    if (index - dq.front() >= k)
    {
      dq.pop_front();
    }

    //* Addition
    if (arr[index] < 0)
    {
      dq.push_back(index);
    }
  }

  // last window ka answer print krlo
  if (dq.empty())
  {
    cout << "0" << endl;
  }
  else
  {
    cout << arr[dq.front()] << " ";
  }
}

int main()
{
  int arr[] = {2,-5,4,-1,-2,0,5};
  int size = 7;
  int k = 3;
  printFirstNegative(arr,size,k);

  return 0;
}