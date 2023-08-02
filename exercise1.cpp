#include <iostream>

using namespace std;

int main()
{
  double x, y;
  char op;

  cout << "Enter a number: ";
  cin >> x;
  cout << "Enter another number: ";
  cin >> y;
  cout << "Enter an operator: ";
  cin >> op;

  switch (op)
  {
  case '+':
    cout << x + y << endl;
    break;
  case '-':
    cout << x - y << endl;
    break;
  case '*':
    cout << x * y << endl;
    break;
  case '/':
    if (y == 0)
    {
      cout << "Cannot divide by zero" << endl;
      break;
    }
    cout << x / y << endl;
    break;
  default:
    cout << "Invalid operator" << endl;
    break;
  }

  return 0;
}