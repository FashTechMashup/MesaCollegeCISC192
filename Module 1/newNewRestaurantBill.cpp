// Crystal J.M. Crawford
// CISC192
// Programming Assignment 1: Restaurant Bill

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  float meal, mealCost, taxAmount, tipAmount, totalBill;
  meal = 88.67;
  taxAmount = meal * .0675;
  mealCost = meal + taxAmount;
  tipAmount = mealCost * .20;
  totalBill = mealCost + tipAmount;

  cout << setprecision(2) << fixed;
  cout << "Meal Cost: $" << meal << endl;
  cout << "Tax Amount: $" << taxAmount << endl;
  cout << "Tip Amount: $" << tipAmount << endl;
  cout << "Total Bill: $" << totalBill << endl;

  cout << endl;
  cout << "Press [Enter]  key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}
// Notes: << setprecistion(n) can be used instead
// of << fixed << showpoint << setprecision(n)
// 1st example you include all the digits
// 2nd example you only include digits after (.)

// setprecision(n) << fixed seems to be a
// simplier way to do 2nd example

// statement above is not completely true
// << showpoint allows zero's to be seen;
// 4.0 would be 4 despite << setprecision or
// << fixed without << showpoint
