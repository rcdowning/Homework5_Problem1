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

  // open the output file
  outFile.open("AnalyzedData.txt");
  
  // read in the date - first line of file
  inFile >> date;
  cout << date << endl;
    //add date to output file as first line
  outFile << date << endl;
  
  // read in the 2 pieces of info on the second line
  inFile >> firstName;
  cout << firstName << ' ';
  inFile >> TestResult;
  cout << TestResult << endl;
  
  while(inFile)
    {
      // update number of cases and persons tested
      cumulative_cases = cumulative_cases + TestResult;
      count++;    // increment the number of patients

      // read in the next line
      inFile >> firstName;
      inFile >> TestResult;
    }
  cout << "Total Number Cases = " << count << endl;
  cout << "Number of persons tested = " << cumulative_cases << endl;
  
  
}