#include <iostream>
using namespace std;

//* Remove All occurrences of a String
void removeOCCRE(string &s, string &part)
{
  int found = s.find(part);
  // Base Case
  if (found == string::npos)
  {
    return;
  }

  // Processing
  if (found != string::npos)
  {
    string left_Part = s.substr(0, found);
    string right_Part = s.substr(found + part.size(), s.size());
    s = left_Part + right_Part;
  }

  removeOCCRE(s, part);
}

string removeOccurrences(string s, string part)
{
  // With Recrusion
  removeOCCRE(s, part);
  return s;
}
int main()
{
  //* Remove All occurrences of a String

  return 0;
}