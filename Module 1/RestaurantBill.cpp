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

  cout << fixed << showpoint << setprecision(2);
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
