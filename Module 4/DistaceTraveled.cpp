// Crystal J.M. Crawford
// CISC192
// Programming Assignment 4: Distance Traveled

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  int speed, hoursInputted, hour, distance;
  cout << endl << "This program displays the distance a vehicle "
       << "travels per hour "
       << endl << "based on the speed and distance inputted by you."
       << endl << endl;


  cout << "Let's get started." << endl << endl
       << "First, enter the vechicle's "
       << "speed (in miles per hour): ";
  cin >> speed;

  cout << "Now, enter the number of hours the vehicle traveled: ";
  cin >> hoursInputted;

  if (speed >= 0 && hoursInputted >= 1)
  {
    cout << endl << "Hour\tDistance Traveled" << endl;
    cout << "-------------------------" << endl;

    for (hour = 1, distance = 0; hour <= hoursInputted; hour++, distance += speed)
    cout << hour << "\t\t" << (distance + speed) << endl;

  }
  else
  cout << endl << "Invalid Entry: Please enter a value of 0 or more for speed "
    << endl << "and a value of 1 or more for hours traveled." << endl;

  cout << endl;
  cout << "Press [Enter]  key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}
