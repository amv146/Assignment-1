#include<iostream>
#include<string>

using namespace std;

int main (int argc, char** argv) {
    // Declares an array that can take up to 10 integers called numberArray
    int numberArray[10];

    /* Prompts the user to write in 10 nonnegative numbers
    * If the value inputted by the user is negative, the program will prompt the user to put in only nonnegative numbers
    * All the values are stored in numberArray
    */
    cout << "Write in 10 nonnegative numbers." << endl;
    for (int i = 0; i < 10; ++i) {
        int tempVal;
        cin >> tempVal;
        while (tempVal < 0) {
            cout << "Please enter only nonnegative numbers." << endl;
            cin >> tempVal;
        }

        numberArray[i] = tempVal;
    }

    // Prints out all of the nonnegative integers that the user entered
    for (int i = 0; i < 10; ++i) {
        cout << numberArray[i] << " ";
    }

    cout << endl;
}