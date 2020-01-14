//Day 1 program Dr_T caculate salary C++: YourLastName
//Date: 1-13-2020 IDE: Repl.it tool
#include <iostream>
using namespace std; 

int main() 
{
  //declare variables and initialize variables  
  double hours = 0.0, rate = 0.0, pay = 0.0;

  //Get the number of hours worked
  cout << "How many hours did you work? ";  
  cin >> hours; // I = input

  //Get the hourly pay rate
  cout << "How much do you get paid per hour? "; 
  cin >> rate; // I = input 

  //calculate the pay based upon user input
  pay = hours * rate;  //P = process 

  //O = output (communicate output clearly to the user Dr_T)
  cout << "Having worked " << hours << " hours, ";
  cout << "at a rate of $" << rate << " per hour, ";
  cout << " your pay is $" << pay << endl; 

  return 0; //exit success   
}