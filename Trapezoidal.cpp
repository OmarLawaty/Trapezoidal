#include <iostream>
#include <cmath>

using namespace std;

float function(float x)
{
  return sqrt(1 + pow(x, 3));
}

float function_compiler(string human_written_function)
{
  return 0;
}

int main()
{
  string func = "";

  int n = 0;
  float a, b, h, sum = 0, I = 0, err;

  cout << "Enter the interval: ";
  cin >> n;

  if (n > 999999 || n < 1)
  {
    do
    {
      cout << "You can't enter a number bigger than 999999. The interval can't be less than 1.\nEnter the interval: ";
      cin >> n;
    } while (n > 999999 || n < 1);
  }

  cout << "Enter the lower limit: ";
  cin >> a;

  cout << "Enter the upper limit: ";
  cin >> b;

  h = abs((a - b) / n);

  for (int i = 1; i < n; i++)
  {
    sum += function(a + i * h);
  }

  I = (function(a) + (sum * 2) + function(b)) * (h / 2);

  cout << "The value of I: " << I << endl;

  system("pause");

  return 0;
}
