#include <iostream>
using namespace std;
int main() {
  // Write code here
  int age;
  bool citizen;
  bool registered;
  cout << "Your age is: ";
  cin >> age;
  cout << "Is you citized Indonesia(1 for yes and 0 for no) :";
  cin >> citizen;
  cout << "Is you registered Indonesia(1 for yes and 0 for no) :";
  cin >> registered;

  if (age >= 18 && citizen == 1 && registered == 1) {
    cout << "You can vote!" << endl;
  } else if (age < 18 && citizen == 1 && registered == 1) {
    cout <<  "You are not old enough to vote." << endl;
  } else if (age < 18 && citizen == 0 && registered == 1) {
    cout << "You are not old enough and eligible to vote." << endl;
  } else if (age < 18 && citizen == 1 && registered == 0) {
    cout <<  "You are not old enough to vote and need to register first." << endl;
  } else if (age >= 18 && citizen == 0 && registered == 1 ) {
    cout << "You are not eligible to vote." << endl;
  } else if (age >= 18 && citizen == 0 && registered == 0 ) {
    cout << "You are not eligible to vote and need to register first." << endl;
  } else if (age >= 18 && citizen == 1 && registered == 0) {
    cout <<  "You need to register first." << endl;
  } else {
    cout << "They have not met the requirements." << endl;
  }
  return 0;
}
