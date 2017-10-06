// Crystal J.M. Crawford
// CISC192
// Programming Assignment 6: Monkey Business


/*
This program collects data on a family of monkeys in the zoo.
It will calcualte:
1. Average amount of food the family eats each day
2. Least amount of food eaten by any one monkey
3. Greatest amount of food eaten by any one monkey
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
const int NUM_MONKEYS = 3; //Number of monkeys in the family
const int NUM_DAYS = 5; // Number of days collecting data
double familyOfMonkeys[NUM_MONKEYS][NUM_DAYS]; // 3x5 array to hold data
double total, average, max, min; // Hold data for calculations
int monkey, day; // Loop counters

cout << endl << "This program collects data on a family of monkeys in the zoo."
     << endl << " Let's find out: " << endl << endl
     << "1. The average amount of food"
     << " the family eats each day" << endl << "2. The least amount"
     << " of food eaten by any one monkey" << endl << "3. The greatest"
     << " of food eaten by any one monkey" << endl << endl;

cout << "Let's begin." << endl << "Please enter the amount of food"
<< " eaten" << endl << "by each monkey (in pounds) each day." << endl << endl;

// Nested loop to fill the array with the amount of
// pounds of food eaten by each monkey each day
for (monkey = 0; monkey < NUM_MONKEYS; monkey++)
{
  for (day = 0; day < NUM_DAYS; day++)
  {
    cout << "Monkey " << (monkey + 1);
    cout << ", Day " << (day + 1) << ": ";
    cin >> familyOfMonkeys[monkey][day];
  }
}

cout << endl << "Thank you for your help :)" << endl << endl;
cout << "Here's the results... " << endl << endl << endl;
cout << "Average Amount Eaten Per Day" << endl;

// Calculating average for each day
for (int day = 0; day < NUM_DAYS; day++)
{
  total = 0;
  for (int monkey = 0; monkey < NUM_MONKEYS; monkey++)
    total += familyOfMonkeys[monkey][day];
  average = total / NUM_MONKEYS;
  cout << "Day " << (day + 1) << ": " << average << " lbs" << endl;
}

// Calculate lowest amount of pounds eaten
min = familyOfMonkeys[0][0];

for (monkey = 0; monkey < NUM_MONKEYS; monkey++)
{
	for (day = 0; day < NUM_DAYS; day++)
 	{
		if (min > familyOfMonkeys[monkey][day])
			min = familyOfMonkeys[monkey][day];
	}
}
cout << endl << "Least Amount Eaten For the Week: " << min << " lbs";

// Calculate greatest amount of pounds eaten
max = familyOfMonkeys[0][0];

for (monkey = 0; monkey < NUM_MONKEYS; monkey++)
{
	for (day = 0; day < NUM_DAYS; day++)
 	{
		if (max < familyOfMonkeys[monkey][day])
			max = familyOfMonkeys[monkey][day];
	}
}
cout << endl << endl << "Greatest Amount Eaten For the Week: " << max << " lbs";
cout << endl;

  cout << endl;
  cout << "Press [Enter]  key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}
