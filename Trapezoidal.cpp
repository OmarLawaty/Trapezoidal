#include <iostream>
#include <cmath>

using namespace std;

float function(float x)
{
  return sqrt(1 + pow(x, 3));
}

int main()
{
  string func = "";

  int n = 999999;
  float a, b, h, sum = 0, I = 0, err;

  cout << "Enter the lower limit: ";
  cin >> a;

  cout << "Enter the upper limit: ";
  cin >> b;

  h = abs((a - b) / n);

  for (int i = 1; i <= n; i++)
  {
    sum += function(a + i * h);
  }

  I = (function(a) + (sum * 2) + function(b)) * (h / 2);

  cout << "The value of I: " << I;

  return 0;
}
