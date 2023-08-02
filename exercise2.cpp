#include <iostream>

using namespace std;

bool checkIsPrime(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;

  return true;
}

int main()
{
  int n = 0, i = 0;

  while (n < 10)
  {
    if (checkIsPrime(i))
    {
      cout << i << " ";
      n++;
    }
    i++;
  }

  cout << endl;

  return 0;
}