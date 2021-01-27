#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char ** argv) {
  int roomCapacity;
  int numOfPeople;

  // Prompts user for maximum room capacity and stores it in roomCapacity
  cout << "What is the maximum room capacity of this meeting room?" << endl;
  cin >> roomCapacity;

  // Prompts user for the number of people attending the meeting and stores it in numOfPeople
  cout << "How many people are going to attend this meeting?" << endl;
  cin >> numOfPeople;

  // Calculates the number of people above or below the maximum room capacity
  int differenceInPeople = roomCapacity - numOfPeople;

  // If the difference in people is below 0, the program tells the user how many people must be exluded from the meeting to satisfy the fire regulations, if above 0, the program tells the user how many more people can join the meeting
  if (differenceInPeople < 0) {
    cout << "" << (fabs(differenceInPeople)) << " people must be excluded from the meeting to satisfy the maximum room capacity due to fire regulations." << endl;
  }
  else {
    cout << "The meeting is legal to occur, and " << differenceInPeople << " more people can legally attend." << endl;
  }

  return 0;
}
