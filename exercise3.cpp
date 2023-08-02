#include <iostream>

using namespace std;

double factorial(double n){
  if(n == 0)
    return 1;
  return n * factorial(n - 1);
}

int main()
{

  double n;

  cout << "Enter a number: ";
  cin >> n;

  cout << n << "! = " << factorial(n) << endl;

  return 0;
}