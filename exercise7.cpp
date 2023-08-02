#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int subjet1, subject2, subject3;

  cout << "Enter the grade of subject 1: ";
  cin >> subjet1;
  cout << "Enter the grade of subject 2: ";
  cin >> subject2;
  cout << "Enter the grade of subject 3: ";
  cin >> subject3;

 cout << fixed << setprecision(2);
  cout << "The average is: " << (subjet1 + subject2 + subject3) / 3.0 << endl;

  return 0;
}