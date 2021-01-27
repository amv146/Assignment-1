#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (int argc, char ** argv) {
  // Initializes all of the constant taxes and fees
  const float FLAT_BASE_PAY = 16.00;
  const float OVERTIME_RATE = 1.5;
  const float SSN_TAX = 0.06;
  const float FED_TAX = 0.14;
  const float STATE_TAX = 0.05;
  const float FLAT_MED_INSURANCE = 10.00;
  const float REG_HOURS_PER_WEEK = 40.00;

  float numOfHours;

  // Prompts user for number of hours worked and stores input into numOfHours.
  cout << "How many hours did you work this week?" << endl;
  cin >> numOfHours;

  // Declares grossPay variable and determines whether the number of hours worked in the week should be considered for overtime if its over the regular hours worked per week
  float grossPay;
  if (numOfHours > REG_HOURS_PER_WEEK) {
    grossPay = REG_HOURS_PER_WEEK * FLAT_BASE_PAY;
    grossPay += ((numOfHours - REG_HOURS_PER_WEEK) * FLAT_BASE_PAY * OVERTIME_RATE);
  }
  else {
    grossPay = numOfHours * FLAT_BASE_PAY;
  }

  // Calculates the taxes withheld given the gross pay that the employee earned this week
  float SSNTaxWithheld = grossPay * SSN_TAX;
  float fedTaxWithheld = grossPay * FED_TAX;
  float stateTaxWithheld = grossPay * STATE_TAX;

  // Calculates the netpay by subtracting the taxes from the net pay
  float netPay = grossPay - SSNTaxWithheld - fedTaxWithheld - stateTaxWithheld - FLAT_MED_INSURANCE;

  // Outputs the gross pay, number of hours worked, along with the tax values and the net pay earned for the week.
  cout << "Your gross pay for working " << numOfHours << " hours this week is $" << grossPay << "." << endl << endl;

  cout << "$" << SSNTaxWithheld << " was withheld for Social Secuity Tax." << endl;
  cout << "$" << fedTaxWithheld << " was withheld for Federal Income Tax." << endl;
  cout << "$" << stateTaxWithheld << " was withheld for State Income Tax." << endl;

  cout << "And a flat $" << FLAT_MED_INSURANCE << " was withheld for Medical Insurance." << endl << endl;

  cout << "This brings your net pay to $" << netPay << "." << endl;

  return 0;

}
