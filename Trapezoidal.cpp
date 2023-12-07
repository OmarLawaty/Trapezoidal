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

  long long n = 1, max_n = 999999;
  float a = 0, b = 0, h = 0, I = 0, sum = 0, err;

  do
  {
    if (n <= 0)
      cout << "The interval can't be less than 1." << endl;

    if (n > 999999)
      cout << "You can't exced 9223372036854775807." << endl;

    cout << "Enter the interval: ";
    cin >> n;
  } while (n > 999999 || n <= 0);

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
