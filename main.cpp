#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int dataTemp;
  int sumData = 0;
  int counter = 0;
  
  // load input file
  ifstream inFile; // declare stream variable
  inFile.open("NumberData.txt");

  // load all data in while loop
  while (inFile >> dataTemp)
  {
    inFile >> dataTemp;
    //cout << dataTemp << endl;
    if (dataTemp >= 0)
    {
      // update cumulative value of all data and number of data points loaded
      sumData = sumData + dataTemp;
      counter++;
    }
    else // the value is negative and we should exit
    {
      cout << "Negative value encountered of " << dataTemp << "." << endl;
      cout << "Will not use rest of data... " << endl;
      break;
    }
  }
// confused on how to display sum
// also wasn't able to get code to run right, using online GDB was confusing
  
  return 0;
}