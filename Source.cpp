/*
 * Calculator.cpp
 *
 *  Date: 5/13/2022
 *  Author: Xaiver Hickey
 */

# include <iostream>
using namespace std;


int main() {

	char op; //Operation = symbols for the user to punch in
	char answer = 'y';

	float num1, num2; 
	//Changed op 1 & 2 to num due to it being a float that can change through out this.
	// Int is a static number that doesn't change. While float allows the numbers change and have a easier time when when doing the math.

	cout << "Are you ready [Y/N]: ";
	cin >> answer;

	if (answer == 'n') // Reason for program exit is for a fail safe check.
	{
		cout << "Program Finished." << endl; // message when the software ends.
		return 0; // Ends program
	}


	while (answer == 'y'); // When User puts Y or y the while loop starts 
		{
			// Split the numbers so it make it easier to operate and less clunky when trying to enter them to cut down confusion how it works.
			// Enter operator gives the user options that we can provide.

			cout << "Enter operator:  +, -, *, / :  "; // Gets op input
			cin >> op;

			cout << "Enter first number: "; // Gets 1st num input.
			cin >> num1;

			cout << "Enter seconed number: "; // Gets 2nd num input
			cin >> num2;
			
			// No need for all the if statements make one into a if then the rest into else if
			// Keep the if statements in brackets.
			// Fixed errors of <<, >>, '' and ; due to them missing, not being used correctly or facing the wrong way -
			// was mainly if statements that needed the fixing. Also included brackets line spacing along with else if statements - 
			// to make the code run smoother and doesn't force run the subtraction multiplication and much more when I only needed addition.

			if (op == '+') // Addition
			{
				cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; // >> was facing the wrong direction
			}

			else if (op == '-') // Subtraction
			{
				cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			}

			else if (op == '*') // Multiplication
			{
				cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; 
			}

			else if (op == '/') // Division 
			{
				cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			}

			else // Else statement is needed when the user trying to give invalid option giving them awareness of their mistake.
			{
				cout << "Error! - Invalid option." << endl;
			}

			cout << "Do you want to continue [Y/N]: "; // Ask if they want to continue 
			cin >> answer; // User gives answer

			if (answer == 'y') // y = yes calls back to the main() to restart the program.
				return main();

			else if (answer == 'n') // n = no continues doesn't call back and ends.
			{
				cout << "Program Finished." << endl; // message when the software ends.
				system("pause"); // Ends program
			}
		}  
}
