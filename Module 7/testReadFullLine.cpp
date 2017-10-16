#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
ifstream inputFile;
string fullName;

inputFile.open("names.txt");

getline(inputFile, fullName);
cout << fullName << endl;

getline(inputFile, fullName);
cout << fullName << endl;

getline(inputFile, fullName);
cout << fullName << endl;

getline(inputFile, fullName);
cout << fullName << endl;

}
//EUREKA!!!
