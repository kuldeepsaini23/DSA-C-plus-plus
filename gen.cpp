#include <iostream>
#include <fstream>
#include <string>
#include <random>
using namespace std;

std::random_device myRandomDevice;
unsigned seed = myRandomDevice();
default_random_engine myRandomEngine(seed);

int randomBetweenTwoNum(int min, int max)
{
  uniform_int_distribution<int> myUnifIntDist(min, max);
  return myUnifIntDist(myRandomEngine);
}

int main(int argc, char **argv)
{
  ofstream ofs;

  double runNumber = atoi(argv[1]);
  double total = atoi(argv[2]);

  ofs.open("SUM.INP", ifstream::out);

  // 30% test to be easy
  if (runNumber / total < 0.3)
  {
    ofs << randomBetweenTwoNum(0, 100) << " " << randomBetweenTwoNum(0, 100);
  }
  // other 30% to be medium
  else if (runNumber / total < 0.6)
  {

    ofs << randomBetweenTwoNum(0, 10000) << " " << randomBetweenTwoNum(0, 10000);
  }
  // the rest to be hard
  else
  {
    ofs << randomBetweenTwoNum(0, 1000000) << " " << randomBetweenTwoNum(0, 1000000);
  }

  ofs.close();

  return 0;
}