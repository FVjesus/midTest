#include <iostream>
#include <string>

using namespace std;

bool isPalindorme(string s){
  int n = s.length();
  for(int i = 0; i < n / 2; i++)
    if(s[i] != s[n - i - 1])
      return false;
  return true;
}

int main()
{
  string s;

  cout << "Enter a string: ";
  cin >> s;

  if(isPalindorme(s))
    cout << "The string is a palindrome" << endl;
  else
    cout << "The string is not a palindrome" << endl;
  
  return 0;
}