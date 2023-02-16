#include <iostream>
using namespace std;

int main() {
  float mathe, science, english, computer, hindi, percentage;
  cout << "Enter the number mathe, science, english, computer and hindi: ";
  cin >> mathe >> science >> english >> computer >> hindi;

  percentage = (mathe + science + english + computer + hindi) / 5;

  cout << "Percentage = " << percentage << endl;
  if (percentage > 90) {
    cout << "Congratulation, your grade is A\n";
  } else if (percentage > 75) {
    cout << "Congratulation, your grade is B\n";
  } else if (percentage > 65) {
    cout << "Congratulation, your grade is C\n";
  } else {
    cout << "Your grade is D";
  }
}