#include <iostream>
using namespace std;

int displayCmd() {
  cout << "Enter a number: ";
  int number;
  cin >> number;
  cout << "You've just write " << number << endl;
}

int main() {
  displayCmd();
  getch();
}
