#include <iostream>

using namespace std;

int main()
{
  cout << "Enter first number: ";
  int first;
  int second;
  cin >> first;
  cout << endl << "Enter second number: ";
  cin >> second;
  int result = first > second ? first : second;
  cout << endl << "Largest number: " << result << endl;
  return 0;
}
