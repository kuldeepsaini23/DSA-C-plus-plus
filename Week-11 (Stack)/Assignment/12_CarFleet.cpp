#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
  int pos, speed;
  Car(int p, int s) : pos(p), speed(s){};
};

static bool mycomp(Car a, Car b) { return a.pos < b.pos; }

int carFleet(int target, vector<int> &position, vector<int> &speed)
{
  if (position.size() == 1)
  {
    return 1;
  }

  vector<Car> cars;
  for (int i = 0; i < position.size(); i++)
  {
    Car car(position[i], speed[i]);
    cars.push_back(car);
  }

  sort(cars.begin(), cars.end(), mycomp);

  // Stack Algo
  stack<float> st;
  for (auto car : cars)
  {
    float time = (target - car.pos) / (float)car.speed;
    while (!st.empty() && st.top() <= time)
    {
      st.pop();
    }
    st.push(time);
  }

  return st.size();
}

int main()
{

  int target = 12;
  vector<int> postion = {10, 8, 0, 5, 3};
  vector<int> speed = {2, 4, 1, 1, 3};

  cout << carFleet(target, postion, speed);

  return 0;
}