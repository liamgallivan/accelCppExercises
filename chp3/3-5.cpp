#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> studentNames;
  vector<double> finalGrades;
  string name;
  cout << "Enter Student name or end-of-file: ";
  while (cin >> name) {
    double midterm, final;
    studentNames.push_back(name);
    cout << "Enter midterm grade followed by final grade: ";
    cin >> midterm >> final;
    cout << "Enter homework grades (two only): ";


    double grade1, grade2;
    cin >> grade1 >> grade2;
    finalGrades.push_back(midterm * .2 + final * .4 + ((grade1 + grade2) / 2) * .4); 
    cout << "Enter Student name or end-of-file: ";
  }

  cout << endl;
  for (vector<string>::size_type i = 0; i != studentNames.size(); i++) {
    cout << "Name: " << studentNames[i] << endl
      << "Grade: " << finalGrades[i] << endl;
  }

  return 0;
}
