#include <iostream>
using namespace std;

//* Reverse Vowels
bool checkVowels(char s)
{
  s = tolower(s);
  return s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
}
string reverseVowels(string s)
{
  int i = 0;
  int j = s.length() - 1;
  while (i < j)
  {
    if (!checkVowels(s[i]))
    {
      i++;
    }
    else if (!checkVowels(s[j]))
    {
      j--;
    }
    else
    {
      swap(s[i], s[j]);
      i++;
      j--;
    }
  }
  return s;
}

int main()
{

  return 0;
}