#include <iostream>
#include <string>

using namespace std;

int main (int argc, char ** argv) {
  const float TON_TO_OZ = 35273.92;
  float weightInOz;
  float weightInTons;
  float numOfBoxes;

  // Prompts for weight of breakfast cereal and takes in your response
  cout << "What is the weight of your breakfast cereal in ounces?" << endl;
  cin >> weightInOz;

  // Converts weight in ounces to weight in tons and determines the number of boxes needed to reach one ton
  weightInTons = weightInOz / TON_TO_OZ;
  numOfBoxes = 1 / weightInTons;

  // Outputs the results calculated above
  cout << "This breakfast cereal weights " << weightInTons << " metric tons, and to get 1 metric ton of this breakfast cereal, you would need " << numOfBoxes << " boxes of this cereal." << endl;

  return 0;
}
