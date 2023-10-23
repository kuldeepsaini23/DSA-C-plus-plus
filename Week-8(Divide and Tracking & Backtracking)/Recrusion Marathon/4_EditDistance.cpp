#include <iostream>
using namespace std;

//* Edit Distance
int minDistanceHelper(string &word1, string &word2, int i, int j)
{
  // Base Case
  if (i >= word1.length())
  {
    // word 1 wali string end hogayi
    //  yani word1 ki length may be word2 se choti hh
    return word2.length() - j;
  }

  if (j >= word2.length())
  {
    // word 1 wali string end hogayi
    //  yani word1 ki length may be word2 se choti hh
    return word1.length() - i;
  }

  int ans = 0;

  if (word1[i] == word2[j])
  {
    // Match
    ans = 0 + minDistanceHelper(word1, word2, i + 1, j + 1);
  }
  else
  {
    // Not match
    // Operation perform karo

    // Add + 1 for first case because humne insert or remove or replace krdiya hh
    // lekin ab agle ke liye findout kr rhe hh

    // Insert
    int option1 = 1 + minDistanceHelper(word1, word2, i, j + 1);

    // Remove
    int option2 = 1 + minDistanceHelper(word1, word2, i + 1, j);

    // Replace
    int option3 = 1 + minDistanceHelper(word1, word2, i + 1, j + 1);

    ans = min(option1, min(option2, option3));
  }

  return ans;
}

int minDistance(string word1, string word2)
{
  int i = 0;
  int j = 0;
  int ans = minDistanceHelper(word1, word2, i, j);
  return ans;
}

int main(){
  // string word1 = "horse", word2 = "ros";
  string word1 = "intention", word2 = "execution";
  cout<<minDistance(word1, word2);

  return 0;
}