// Crystal J.M. Crawford
// CISC192
// Programming Assignment 2: Stadium Seating

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  double classA = 15, classB = 12, classC = 9, numberOfTickets;

  cout << endl << "How many Class A tickets were sold? ";
  cin >> numberOfTickets;
  classA *= numberOfTickets;

  cout << "How many Class B tickets were sold? ";
  cin >> numberOfTickets;
  classB *= numberOfTickets;

  cout << "How many Class C tickets were sold? ";
  cin >> numberOfTickets;
  classC *= numberOfTickets;

  cout << fixed << showpoint << setprecision(2);

  cout << endl << "The total amount of ticket sells for each ";
  cout << "Class are:" << endl;
  cout << "Class A: $" << classA << endl;
  cout << "Class B: $" << classB << endl;
  cout << "Class C: $" << classC << endl;

  cout << endl;
  cout << "Press [Enter] key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}
