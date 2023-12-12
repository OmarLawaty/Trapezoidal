#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

double target_function(string user_written, float x)
{
  int parentheses_count = 0;

  for (int i = 0; i < user_written.size(); i++)
  {
    char current_character = user_written[i];
    if (current_character == '(')
      parentheses_count++;
    if (current_character == ')')
      parentheses_count--;
  }

  cout << parentheses_count << endl;

  if (parentheses_count != 0)
  {
    cerr << "Error: Opening parentheses count and closing parentheses count doesn't match\n";
    return NAN;
  }

  return 0.0;
}
