#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Enter words followed by end-of-line: ";
  string word;
  cin >> word;

  int shortest, longest;
  shortest = word.size();
  longest = word.size();

  while (cin >> word) {
    if (word.size() > longest)
      longest = word.size();
    if (word.size() < shortest)
      shortest = word.size();
  }

  cout << "Longest word length: " << longest << endl
    << "Shortest word length: " << shortest << endl;
  
  return 0;
}
