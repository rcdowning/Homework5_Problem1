/*******************************************************
Programmer: Ryan Downing
Description: Test loading a *.dat file. Follows handout     
             EOF_While_FileImport.pdf

Date: 09/2020
******************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
 
  // declare variables
  string firstName;
  string date;
  int TestResult;
  int count = 0;
  int cumulative_cases = 0;
  
  // delcare stream variables
  ifstream inFile;      // needed to access file we'll load
  ofstream outFile;     // needed to save the results of the analysis

  // open input file
  inFile.open("TestResultsData.dat");

  // read in the date - first line of file
  inFile >> date;
  cout << date << endl;


  
}