#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  
  const string greeting = "Hello, " + name + "!";
  const int vpad = 1;
  const int hpad = 2;
  const int rows = vpad * 2 + 3;
  const string::size_type cols = greeting.size() + hpad * 2 + 2;
  cout << endl;

  for (int row = 0; row != rows; ++row) {
    string::size_type column = 0;
    while (column != cols) {
      if (row == vpad + 1 && column == hpad + 1) {
        cout << greeting;
        column += greeting.size();
      } else {
        if (row == 0 || row == rows -1 ||
            column == 0 || column == cols -1)
            cout << "*";
        else 
            cout << " ";
        ++column;
      }
    }

    cout << endl;
  }

  return 0;
}
