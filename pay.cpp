#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include "person.h"

using namespace std;

void readData(Person employees[],int n){
  string fName;
  string lName;
  float rate;
  float hours;
  int i =0;
  ifstream inputfile;
  inputfile.open ("input.txt");
  if (inputfile.is_open()){
// vector<Person> persons //creating a vector "persons"
  //  while (inputfile>>fName>>lName>>rate>>hours))
  //    cout<<fName<<lName<<rate<<hours<< endl;
  //  persons.push_back(n)
  while(!inputfile.eof()){
  inputfile>>fName>>lName>>rate>>hours;

  employees[i].setFirstName(fName);
  employees[i].setLastName(lName);
  employees[i].setPayRate(rate);
  employees[i].setHoursWorked(hours);
  i++;
  cout<<fName<<lName<<rate<<hours<<endl;
}

  inputfile.close();
}
}

void writeData(Person employees[], int n){
ofstream outputfile;
outputfile.open("outputfile.txt");
for (int i =0; i<n; i++){
outputfile <<employees[i].fullName()<< " " << employees[i].totalPay()<< endl;
}
outputfile.close();
}

int main()
{
  int n=20;
  string lastName;
  string firstName;
  float payRate;
  float hoursWorked;
  Person employees[n];
  //for (int i =0; i< n;i++){
  //cout << employees[i]<< endl;
  readData(employees,n);
  writeData(employees,n);

  return 0;
}
