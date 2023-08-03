#include <iostream>

using namespace std;

double investment(double value, double interest, int months)
{
  double finalValue = value;

  while (months--)
  {
    finalValue += finalValue * interest;
  }

  return finalValue;
}

int main()
{
  double value, interest;
  int months;

  cout << "Enter the initial value: ";
  cin >> value;
  cout << "Enter the interest rate: ";
  cin >> interest;
  cout << "Enter the number of months: ";
  cin >> months;

  cout << endl << "The final value is: " << investment(value, interest, months) << endl;

  return 0;
}