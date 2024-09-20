#include <iostream>
#include <thread>
#include <cstdlib>
#include <string>

using namespace std;

// all variables
string userinput, endchioce, useroperation;
double num1, num2, result;

void closingapp() {

	cout << "Closing Calculator\n";
	cout << "Thank you for using my calculator.\n";
	this_thread::sleep_for(chrono::seconds(5));
	exit;

}

// function that is for when the user is done with a calculation or gets an error statement
void newcalculation() {


	// Asking if the user wants to use the calculator
	cout << "Would you like to use this calculator?\n";
	cout << "Please write either yes or no!\n";

	// Getting user input
	cin >> userinput;

	// if statement checking if user input
	if (userinput == "yes") {

		// asking what operation the user wants to choose
		cout << "Choose an operation below.\n";
		cout << "addition, +\n";
		cout << "subtraction, -\n";
		cout << "division, /\n";
		cout << "multiplication, x\n";
		cout << "Please type either the whole word or the symbol!\n";

		// getting user input for the desired operation
		cin >> useroperation;

		// if statement to see if the users input was valid
		// if the users input is invalid then gives error statement
		if (useroperation == "+" || useroperation == "addition") {

			cout << "You choose Addition\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 + num2 = result
			result = num1 + num2;
			cout << "\n";

			// display the answer
			cout << num1 << " + " << num2 << " = " << result << ".\n";
			newcalculation();

		} else if (useroperation == "-" || useroperation == "subtraction") {

			cout << "You choose Subtraction\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 - num2 = result
			result = num1 - num2;
			cout << "\n";

			// display the answer
			cout << num1 << " - " << num2 << " = " << result << ".\n";
			newcalculation();

		} else if (useroperation == "/" || useroperation == "division") {

			cout << "You choose Division\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 / num2 = result
			result = num1 / num2;
			cout << "\n";

			// display the answer
			cout << num1 << " / " << num2 << " = " << result << ".\n";
			newcalculation();

		} else if (useroperation == "x" || useroperation == "multiplication") {

			cout << "You choose Multiplication\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 * num2 = result
			result = num1 * num2;
			cout << "\n";

			// display the answer
			cout << num1 << " x " << num2 << " = " << result << ".\n";
			newcalculation();

		} else {

			errorop1();

		}

	} else if (userinput == "no") {

		closingapp();

	} else {

		errorq1();

	}

}

void errorq1() {

	cout << "Please write either yes or no!\n";
	newcalculation();

}

void errorop1() {

	cout << "Please choose a valid operation!\n";
	newcalculation();

}

int main() {

	// Asking if the user wants to use the calculator
	cout << "Would you like to use this calculator?\n";
	cout << "Please write either yes or no!\n";

	// Getting user input
	cin >> userinput;

	// if statement checking if user input
	if (userinput == "yes") {
			
		// asking what operation the user wants to choose
		cout << "Choose an operation below.\n";
		cout << "addition, +\n";
		cout << "subtraction, -\n";
		cout << "division, /\n";
		cout << "multiplication, x\n";
		cout << "Please type either the whole word or the symbol!\n";

		// getting user input for the desired operation
		cin >> useroperation;

		// if statement to see if the users input was valid
		// if the users input is invalid then gives error statement
		if (useroperation == "+" || useroperation == "addition") {
			
			cout << "You choose Addition\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 + num2 = result
			result = num1 + num2;
			cout << "\n";

			// display the answer
			cout << num1 << " + " << num2 << " = " << result << ".\n";
			newcalculation();

		} else if (useroperation == "-" || useroperation == "subtraction") {
			
			cout << "You choose Subtraction\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 - num2 = result
			result = num1 - num2;
			cout << "\n";

			// display the answer
			cout << num1 << " - " << num2 << " = " << result << ".\n";
			newcalculation();
			 
		} else if (useroperation == "/" || useroperation == "division") {

			cout << "You choose Division\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 / num2 = result
			result = num1 / num2;
			cout << "\n";

			// display the answer
			cout << num1 << " / " << num2 << " = " << result << ".\n";
			newcalculation();

		} else if (useroperation == "x" || useroperation == "multiplication") {
			
			cout << "You choose Multiplication\n";
			cout << "Enter the First Number: ";
			cin >> num1;
			cout << "\n";
			cout << "Enter the Second Number: ";
			cin >> num2;
			cout << "\n";

			// num1 * num2 = result
			result = num1 * num2;
			cout << "\n";

			// display the answer
			cout << num1 << " x " << num2 << " = " << result << ".\n";
			newcalculation();

		} else {

			errorop1();

		}

	} else if (userinput == "no") {
			
		closingapp();

	} else {
			
		errorq1();

	}
}
