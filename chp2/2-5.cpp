#include <iostream>
#include <string>

using namespace std;

int main()
{
  //square
  cout << "Square:" << endl;
  const string::size_type width = 5;
  string side(width, '*');

  for (string::size_type i = 0; i != width; ++i) {
    if ( i == 0 || i == width - 1) {
      cout << side;
    } else {
      cout << "*" << string(width - 2, ' ') << "*";
    }

    cout << endl;
  }

  //rectangle
  cout << endl << "Rectangle:" << endl;

  const string::size_type height = 10;

  for (string::size_type i = 0; i != height; ++i) {
    if (i == 0 || i == height - 1) {
      cout << side;
    } else {
      cout << "*" << string(width - 2, ' ') << "*";
    }

    cout << endl;
  }

  //triangle
  cout << endl << "Triangle:" << endl;

  const string::size_type triWidth = 7;
  string::size_type middle = triWidth / 2 + 1;
  cout << string(triWidth / 2, ' ') << "*" << endl;
  for (string::size_type i = 1; i != triWidth / 2; ++i) {
    cout << string(triWidth / 2 - i, ' ') << "*" << string(i + (i - 1), ' ') << "*" << endl;
  }
  cout << string(triWidth, '*') << endl;

  return 0;
}
