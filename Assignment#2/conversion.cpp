#include <iostream>
#include <string>

using namespace std;

// Gets the input for feet and inches and passes them back through the pass by reference parameters
void getInput(double& feet, double& inches) {
    
    /* Prompts the user for the amount of feet and stores it in the pass by reference feet variable
    * Prompts user to re-enter if the amount of feet is a negative number
    */ 
    cout << "Please input the amount of feet you would like to convert." << endl;

    cin >> feet;

    while (feet < 0) {
        cout << "Please input a positive number.";
        cin >> feet;
    }

    /* Prompts the user for the amount of inches and stores it in the pass by reference inches variable
    * Prompts user to re-enter if the amount of inches is a negative number
    */ 
    cout << "Please input the amount of inches you would like to convert." << endl;

    cin >> inches;

    while (inches < 0) {
        cout << "Please input a positive number.";
        cin >> inches;
    }
}

// Converts inches to feet
double convertInchesToFeet(double inches) {
    return (inches / 12);
}

// Converts feet to meters
double convertFeetToMeters(double feet) {
    return (feet * 0.3048);
}

// Converts feet to centimeters
double convertFeetToCentimeters(double feet) {
    return (convertFeetToMeters(feet) * 100.0);
}

// Outputs the resulting meters and centimeters to the user
void outputResult(double meters, double centimeters) {
    cout << "The specified measurements are equivalent to " << meters << " meters or " << centimeters << " centimeters." << endl;
}

int main(int argc, char** argv) {
    // Declares all of the variables used for the program
    double feet;
    double inches;
    int meters;
    int centimeters;

    // Gets input from user
    getInput(feet, inches);

    // Does appropriate calculations 
    feet += convertInchesToFeet(inches);
    cout << feet;
    meters = convertFeetToMeters(feet);
    centimeters = convertFeetToCentimeters(feet);

    // Outputs results
    outputResult(meters, centimeters);
}