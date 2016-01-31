#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  
  const string greeting = "Hello, " + name + "!";
  const string spaces(greeting.size(), ' ');
  const string second = "* " + spaces + " *";
  const string first(second.size(), '*');

  cout << endl
    << first << endl
    << second << endl
    << "* " << greeting << " *" << endl
    << second << endl
    << first << endl;

  return 0;
}
