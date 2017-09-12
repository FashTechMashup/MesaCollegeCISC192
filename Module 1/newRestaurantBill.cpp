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

  cout << setprecision(4);
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
