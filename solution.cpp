#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream ifs;
  ofstream ofs;
  ifs.open("SUM.INP", ifstream::in);
  ofs.open("SUM.OUT", ifstream::out);

  int a, b;

  ifs >> a >> b;
  ofs << (a + b);

  ifs.close();
  ofs.close();

  return 0;
}