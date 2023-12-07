#include <iostream>
#include <cmath>

using namespace std;

double function(double x)
{
  return sqrt(1 + pow(x, 3));
}

double get_integration(int n, float a, float b)
{
  float h = 0;
  double sum = 0, I = 0;

  h = abs((a - b) / n);

  for (int i = 1; i < n; i++)
  {
    sum += function(a + i * h);
  }

  I = (function(a) + (sum * 2) + function(b)) * (h / 2);

  return I;
}

int main()
{
  int n = 1, max_n = 999999999;
  float a = 0, b = 0;
  double I = 0, nearest_I = 0, err = 0;

  do
  {
    if (n <= 0)
      cout << "The interval can't be less than 1." << endl;

    if (n > max_n)
      cout << "You can't exced " << max_n << "." << endl;

    cout << "Enter the interval: ";
    cin >> n;
  } while (n > max_n || n <= 0);

  cout << "Enter the lower limit: ";
  cin >> a;

  cout << "Enter the upper limit: ";
  cin >> b;

  nearest_I = get_integration(max_n, a, b);
  I = get_integration(n, a, b);

  err = abs((I - nearest_I) / nearest_I) * 100;

  cout << "The value of I is close to: " << I << "\nError percentage is nearly: " << err << "%" << endl;

  system("pause");
  return 0;
}
