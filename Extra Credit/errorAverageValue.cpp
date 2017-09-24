// Crystal J.M. Crawford
// CISC192
// Extra Credit 1: Average Value

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  float n = 0, average, number, total = 0;

  cout << endl << "This program calculates the average value of "
       << "any set of numbers you input." << endl;
  cout << "When you are finished inputting numbers enter .5"
       << endl;


  while (number != 0.5)
  {
      cout << endl << "Enter a number: ";
      cin >> number;
      total += number;
      n++;
  }
    average = (total / n);
    cout << fixed << showpoint << setprecision(2);
    cout << endl << "The average for the set of " << n
        << " number(s) you put in are: "
        << average;

    cout << endl << "Programmer: Crystal J.M. Crawford" << endl;

  cout << endl;
  cout << "Press [Enter]  key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}
