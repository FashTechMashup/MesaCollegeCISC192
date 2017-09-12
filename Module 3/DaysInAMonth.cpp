// Crystal J.M. Crawford
// CISC192
// Programming Assignment 3: Days In A Month

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  int month, year;

  // Numerical Value of Months
  const int JAN = 1,
            FEB = 2,
            MAR = 3,
            APR = 4,
            MAY = 5,
            JUN = 6,
            JUL = 7,
            AUG = 8,
            SEP = 9,
            OCT = 10,
            NOV = 11,
            DEC = 12;

// Days in Each Month
  const int JAN_DAYS = 31,
            FEB_DAYS = 28,
            FEB_LEAP_YEAR = 29,
            MAR_DAYS = 31,
            APR_DAYS = 30,
            MAY_DAYS = 31,
            JUN_DAYS = 30,
            JUL_DAYS = 31,
            AUG_DAYS = 31,
            SEP_DAYS = 30,
            OCT_DAYS = 31,
            NOV_DAYS = 30,
            DEC_DAYS = 31;



  cout << endl << "Want to find out the number of days "
       << "in a month for any year?" << endl << endl;

  cout << "First, enter a month using its numerical value." << endl;
  cout << "(i.e. 3 for March) ";
  cin >> month;

  cout << endl << "Next, enter a four digit year." << endl;
  cout << "(i.e. 2011) ";
  cin >> year;
  cout << endl;

  if (month == JAN)
  {
    cout << "There were " << JAN_DAYS << " days in January of " << year
         << "." << endl;
  }

  else if (month == FEB && year % 100 != 0)
  {
    cout << "There were " << FEB_DAYS << " days in February of " << year
         << "." << endl;
  }

  else if (month == FEB && (year % 100 == 0 && year % 400 != 0))
  {
    cout << "There were " << FEB_DAYS << " days in February of " << year
         << "." << endl;
  }

  else if (month == FEB && (year % 100 == 0 && year % 400 == 0))
  {
    cout << "There were " << FEB_LEAP_YEAR << " days in February of " << year
         << "." << endl;
  }

  else if (month == MAR)
  {
    cout << "There were " << MAR_DAYS << " days in March of " << year
         << "." << endl;
  }

  else if (month == APR)
  {
    cout << "There were " << APR_DAYS << " days in April of " << year
         << "." << endl;
  }

  else if (month == MAY)
  {
    cout << "There were " << MAY_DAYS << " days in May of " << year
         << "." << endl;
  }

  else if (month == JUN)
  {
    cout << "There were " << JUN_DAYS << " days in June of " << year
         << "." << endl;
  }

  else if (month == JUL)
  {
    cout << "There were " << JUL_DAYS << " days in July of " << year
         << "." << endl;
  }

  else if (month == AUG)
  {
    cout << "There were " << AUG_DAYS << " days in August of " << year
         << "." << endl;
  }

  else if (month == SEP)
  {
    cout << "There were " << SEP_DAYS << " days in Septmeber of " << year
         << "." << endl;
  }

  else if (month == OCT)
  {
    cout << "There were " << OCT_DAYS << " days in October of " << year
         << "." << endl;
  }

  else if (month == NOV)
  {
    cout << "There were " << NOV_DAYS << " days in November of " << year
         << "." << endl;
  }

  if (month == DEC)
  {
    cout << "There were " << DEC_DAYS << " days in December of " << year
         << "." << endl;
  }
  else
    cout << "Enter a valid numerical month (i.e. 3 for March).";


  cout << endl;
  cout << "Press [Enter] key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}
