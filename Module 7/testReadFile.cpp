// Crystal J.M. Crawford
// CISC192
// Programming Challenge 7: Binary String Search

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
ifstream inputFile;
string fullName;

inputFile.open("//Users//kmist//desktop//mesa college//cisc 192//Module 7//names.txt");

inputFile >> fullName;
cout << fullName << endl;


cout << endl;
cout << "Press [Enter]  key to end ... ";
cin.ignore(256, '\n');
cin.get();
return 0;
}
