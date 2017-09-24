// Crystal J.M. Crawford
// CISC192
// Programming Assignment 5: Hospital Overload

#include <iostream>
#include <iomanip>
using namespace std;

void careType(char &);
double totalCharges (int, double, double, double);
double totalCharges (double, double);

int main ()
{
  int days;
  char patient;
  double dailyRate, medCharges, servCharges;

  cout << endl << "Welcome to Hope Hospital's Billing Database" << endl << endl;

  cout << "In order to calculate the total charges for a patient " << endl
       << "I first need to know what type of care they received." << endl;

  cout << endl << "Please enter the letter 'I' if they were an in-patient "
       << endl << "and the letter 'O' if they were an out-patient." << endl;

  careType(patient);

  if (patient == 'I' || patient == 'i')
  {
    cout << endl << "Enter the number of days the patient has been in our care: ";
    cin >> days;

    while (days < 0)
    {
      cout << endl << "Invalid Entry: Only enter values of 0 and above" << endl;
      cout << endl << "Number of Days: ";
      cin >> days;
    }

    cout << endl << "Enter their daily rate: $";
    cin >> dailyRate;

    while (dailyRate < 0)
    {
      cout << endl << "Invalid Entry: Only enter values of 0 and above" << endl;
      cout << endl << "Daily Rate: $";
      cin >> dailyRate;
    }
    cout << endl << "Enter the amount of thier medication charges: $";
    cin >> medCharges;

    while (medCharges < 0)
    {
      cout << endl << "Invalid Entry: Only enter values of 0 and above" << endl;
      cout << endl << "Medication Charges: $";
      cin >> medCharges;
    }

    cout << endl << "Enter the amount of thier service charges: $";
    cin >> servCharges;

    while (servCharges < 0)
    {
      cout << endl << "Invalid Entry: Only enter values of 0 and above" << endl;
      cout << endl << "Service Charges: $";
      cin >> servCharges;
    }

      cout << endl << "Patient's Total Charges: $"
           << totalCharges(days, dailyRate, medCharges, servCharges) << endl;
  }

  else if (patient == 'O' || patient == 'o')
  {
    cout << endl << "Enter the amount of the patient's service charges: ";
    cin >> servCharges;

    while (servCharges < 0)
    {
      cout << endl << "Invalid Entry: Only enter values of 0 and above" << endl;
      cout << endl << "Service Charges: $";
      cin >> servCharges;
    }

    cout << endl << "Enter the amount of their medication charges: ";
    cin >> medCharges;

    while (medCharges < 0)
    {
      cout << endl << "Invalid Entry: Only enter values of 0 and above" << endl;
      cout << endl << "Medication Charges: $";
      cin >> medCharges;
    }
    
    cout << endl << "Patient's Total Charges: $"
         << totalCharges(servCharges, medCharges) << endl;
  }

  cout << endl;
  cout << "Press [Enter]  key to end ... ";
  cin.ignore(256, '\n');
  cin.get();
  return 0;
}

void careType(char & patient)
{
  cout << endl << "Care Type: ";
  cin >> patient;

  while (patient != 'I' && patient != 'i' &&
            patient != 'O' && patient != 'o')
  {
    cout << endl << "Invalid Entry: Please enter the letter 'I' for an in-patient "
         << endl << "or the letter 'O' for an out-patient." << endl;
    cout << endl << "Care Type: ";
    cin >> patient;
  }
}

double totalCharges(int days, double dailyRate,
          double medCharges, double servCharges)
{
  cout << fixed << showpoint << setprecision(2);
  return ((days * dailyRate) + medCharges + servCharges);
}

double totalCharges(double servCharges, double medCharges)
{
  cout << fixed << showpoint << setprecision(2);
  return (servCharges + medCharges);
}
