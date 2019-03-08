#include <iostream>
#include <string>
#include "person.h"

using namespace std;

Person:: Person(){
  firstName = "";
  lastName = "";
  payRate = 0.0;
  hoursWorked = 0.0;
}
void Person::setFirstName(string fName){ firstName = fName; }

string Person::getFirstName() {
    return firstName;
    }

void Person::setLastName (string lName) { lastName = lName;}
string Person::getLastName() {
    return lastName;
}

void Person::setPayRate (float rate) { payRate = rate;}
float Person::getPayRate() {
  return payRate;
}

void Person::setHoursWorked (float hours) { hoursWorked = hours;}
float Person::getHoursWorked(){
  return hoursWorked;
}

float Person:: totalPay(){
  float total = 0.0;
  int n;
  for (int i =0;i<n; i++)
  total = payRate * hoursWorked;
  
  return total;
}

string Person:: fullName(){
 Person name;
 string fname = name.firstName +" "+name.lastName;
 return fname;
}
