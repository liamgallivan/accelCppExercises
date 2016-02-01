#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  // input numbers
  cout << "Enter numbers followed by end-of-file: ";
  vector<int> numbers;
  int x;
  while (cin >> x)
    numbers.push_back(x);

  // sort numbers
  sort(numbers.begin(), numbers.end());

  // find quartiles
  vector<int>::size_type numberSize = numbers.size();
  vector<int>::size_type numberMid = numberSize / 2;
  int q1, q2, q3;
  if (numberSize % 2 == 0) {
    q2 = (numbers[numberMid - 1] + numbers[numberMid]) / 2;
    vector<int>::size_type quarterMid = numberMid / 2;

    if (numberMid % 2 == 0) {
      q1 = (numbers[quarterMid - 1] + numbers[quarterMid]) / 2;
      q3 = (numbers[numberMid + quarterMid - 1] + numbers[numberMid + quarterMid]) / 2;
    } else {
      q1 = numbers[quarterMid];
      q3 = numbers[quarterMid + numberMid];
    }
  } else if (numberSize == 1) {
    q1 = numbers[0];
    q2 = numbers[0];
    q3 = numbers[0];
  } else {
    q2 = numbers[numberMid];
    
    if ((numberSize - 1) % 4 == 0) {
     vector<int>::size_type quarterMid = (numberSize - 1) / 4;
     q1 = (numbers[quarterMid - 1] * .25) + (numbers[quarterMid] * .75);
     q3 = (numbers[quarterMid * 3] * .75) + (numbers[quarterMid * 3 + 1] * .25);
    } else {
     vector<int>::size_type quarterMid = (numberSize - 3) / 4;
     q1 = (numbers[quarterMid] * .75) + (numbers[quarterMid + 1] * .25);
     q3 = (numbers[quarterMid * 3 + 1] * .25) + (numbers[quarterMid * 3 + 2] * .75);

    }
  }

  cout << "Your quartiles are: Q1 " << q1 << ", Q2 " << q2 << ", Q3 " << q3 << "." << endl;
  return 0;
}
