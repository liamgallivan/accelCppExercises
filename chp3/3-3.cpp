#include <iostream>
#include <string>
#include <vector>

using namespace std;
// using vectors, count how many times a word is used
int main()
{
  cout << "Enter words to count followed by end-of-file: ";
  string line;
  vector<string> words;
  while (cin >> line)
    words.push_back(line);
  cout << endl;

  for (vector<string>::size_type i = 0; i != words.size(); i++) {
    if (words[i] == "")
      continue;
    string word = words[i];
    words[i] = "";
    cout << word << ": ";
    int counter = 1;
    for (vector<string>::size_type j = 0; j != words.size(); j++) {
      if (words[j] == word) {
        counter++;
        words[j] = "";
        j--;
      }
    }
    cout << counter << endl;
  }

  return 0;
}
