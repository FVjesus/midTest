#include <iostream>

using namespace std;

void table(int n)
{

  for (int i = 1; i <= 10; i++)
  {
    cout << n << " x " << i << " = " << n * i << endl;
  }
}

int main()
{

  int n;

  cout << "Enter a number: ";
  cin >> n;

  cout << endl
       << "Table of " << n << endl;
  table(n);

  return 0;
}