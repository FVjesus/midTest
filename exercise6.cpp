#include <iostream>
#include <string>

using namespace std;

int voewlCounter(string s)
{
  int counter = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (toupper(s[i]) == 'A' ||
        toupper(s[i]) == 'E' ||
        toupper(s[i]) == 'I' ||
        toupper(s[i]) == 'O' ||
        toupper(s[i]) == 'U')
    {
      counter++;
    }
  }

  return counter;
}

int main()
{
  string s;

  cout << "Enter a sentence: ";
  getline(cin, s);

  cout << "Number of vowels: " << voewlCounter(s) << endl;
  return 0;
}