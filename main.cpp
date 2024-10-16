#include <iostream>
#include <thread>
#include <cstdlib>
#include <string>
#include <cctype>

using namespace std;

// Declaring Variables
string userinput, useroperation;
float num1, num2, result;

// Declaring Functions
void closingapp(), errorq1(), errorop1(), divisionBy0();

// Function to validate numeric input
bool getValidNumber(float& num)
{
	while (true)
	{
		cin >> num;
		if (cin.fail())
		{
			cin.clear(); // Clear the error state
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
			cout << "\n\t The input is not a valid number. Please try again: ";
		}
		else
		{
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
			return true; // Valid input
		}
	}
}

int main()
{
	while (true)
	{
		// Asking if the user wants to use the calculator
		cout << "\t Would you like to use this calculator?";
		cout << "\n\t Please write either yes or no: ";

		// Getting user input
		cin >> userinput;

		// if statement checking if user input
		if (userinput == "yes")
		{
			// asking what operation the user wants to choose
			cout << "\n\n\t Choose an operation below.";
			cout << "\n\t addition, +";
			cout << "\n\t subtraction, -";
			cout << "\n\t division, /";
			cout << "\n\t multiplication, x";
			cout << "\n\n\t Please type either the whole word or the symbol! \n";

			// getting user input for the desired operation
			cout << "\t ";
			cin >> useroperation;

			// if statement to see if the users input was valid
			// if the users input is invalid then gives error statement
			if (useroperation == "+" || useroperation == "addition")
			{
				cout << "\n\n\t You choose Addition";
				cout << "\n\t Enter the First Number: ";
				getValidNumber(num1); // Use the new function to check if the number is valid

				cout << "\t Enter the Second Number: ";
				getValidNumber(num2); // Use the new function to check if the number is valid

				result = num1 + num2;
				cout << "\t " << num1 << " + " << num2 << " = " << result << ".\n\n\n";
			}
			else if (useroperation == "-" || useroperation == "subtraction")
			{
				cout << "\n\n\t You choose Subtraction";
				cout << "\n\t Enter the First Number: ";
				getValidNumber(num1); // Use the new function to check if the number is valid

				cout << "\t Enter the Second Number: ";
				getValidNumber(num2); // Use the new function to check if the number is valid

				result = num1 + num2;
				cout << "\t " << num1 << " + " << num2 << " = " << result << ".\n\n\n";
			}
			else if (useroperation == "/" || useroperation == "division")
			{
				cout << "\n\n\t You choose Division";
				cout << "\n\t Enter the First Number: ";
				getValidNumber(num1); // Use the new function to check if the number is valid

				cout << "\t Enter the Second Number: ";
				getValidNumber(num2); // Use the new function to check if the number is valid

				// if statement to handle division by 0 
				if (num2 == 0)
				{
					divisionBy0();
				}
				else
				{
					result = num1 + num2;
					cout << "\t " << num1 << " + " << num2 << " = " << result << ".\n\n\n";
				}
			}
			else if (useroperation == "x" || useroperation == "multiplication")
			{
				cout << "\n\n\t You choose Multiplication";
				cout << "\n\t Enter the First Number: ";
				getValidNumber(num1); // Use the new function to check if the number is valid to check if the number is valid

				cout << "\t Enter the Second Number: ";
				getValidNumber(num2); // Use the new function to check if the number is valid

				result = num1 + num2;
				cout << "\t " << num1 << " + " << num2 << " = " << result << ".\n\n\n";

			}
			else
			{
				errorop1();
			}
		}
		else if (userinput == "no")
		{
			closingapp();
		}
		else
		{
			errorq1();
		}
	}
}

// funtion that is for closing the program
void closingapp()
{
	cout << "\n\n\t Closing Calculator";
	cout << "\n\t Thank you for using my calculator. \n\t ";
	this_thread::sleep_for(chrono::seconds(5));
	exit(0);
}

// function for handling if the user types anything other then yes or no
void errorq1()
{
	cout << "\n\n\t Please write either yes or no! \n";
}

// function for handling if the user types anything other then the word or symbol for the operations
void errorop1()
{
	cout << "\n\n\t Please choose a valid operation! \n";
}

void divisionBy0()
{
	cout << "\n\t\t You are not able to divide by 0";
	cout << "\n\t\t Please choose a number that is greater then 0";
}
