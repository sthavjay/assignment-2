#include <iostream>
#include <fstream>
#include <string>
#include<iomanip>
#include "person.cpp"

using namespace std;

void readData(Person employees[],int &n){
  string fName;
  string lName;
  float rate;
  float hours;
  Person i ;
  ifstream inputfile;
  inputfile.open ("input.txt");
  if (inputfile.is_open()){
// vector<Person> persons //creating a vector "persons"
  while(!inputfile.eof()){
  inputfile>>fName>>lName>>rate>>hours;

  i.setFirstName(fName);
  i.setLastName(lName);
  i.setPayRate(rate);
  i.setHoursWorked(hours);
  employees[n]=i;
  n++;
 cout<<fName<<" "<<lName<< " "<<rate << " "<<hours<<endl;
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
  int n=0;

  Person employees[20];
  //for (int i =0; i< n;i++){
  //cout << employees[i]<< endl;
  readData(employees,n);
  writeData(employees,n);

  return 0;
}
