#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int dataTemp;
  
  // load input file
  ifstream inFile; // declare stream variable
  inFile.open("NumberData.txt");

  // load all data in while loop
  while (!inFile.eof())
  {
    inFile >> dataTemp;
    cout << dataTemp << endl;
    
  }
}