#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int dataTemp;
  
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
      
    }
    else // the value is negative and we should exit
    {
      cout << "Negative value encountered of " << dataTemp << "." << endl;
      cout << "Will not use rest of data... " << endl;
      break;
    }
  }
}