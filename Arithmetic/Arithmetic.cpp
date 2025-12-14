#include <iostream>
using namespace std;

//Simple code for studying programming logic in CPP. Written by @Mateus Zamorano, student of Systems Analysis and Development.

int main() {
	float num1, num2, num3, num4, resul; //Variables that we will use to store user input.
	int option;

	begin: // This function returns to the beginning of the code.

	cout << "CHOOSE YOUR OPERATION AND PRESS 'ENTER'" << endl << "[1] - SUM, [2] - SUBSTRACT, [3] - MULTIPLY, [4] - DIVIDE: " << endl; // This line receives user input.
	cout << "---- ONLY NUMBERS! ----" << endl; // WARNING.
	cin >> option; // Variable that stores the user's choice.

	switch (option) { // This function is used to select which operation the user wants.

	case 1: // User chose to add.
		cout << "TYPE THE FIRST NUMBER OF SUM: ";
		cin >> num1;

		cout << "TYPE THE SECOND NUMBER OF SUM: ";
		cin >> num2;

		cout << "TYPE THE THIRD NUMBER OF SUM: ";
		cin >> num3;

		cout << "TYPE THE FOURTH NUMBER OF SUM: ";
		cin >> num4;

		resul = num1 + num2 + num3 + num4;

		cout << "OPERATION RESULT: " << resul << endl;
		break;

	case 2: // User chose to subtract.
		cout << "TYPE THE FIRST NUMBER TO SUBTRACT: ";
		cin >> num1;

		cout << "TYPE THE SECOND NUMBER TO SUBTRACT: ";
		cin >> num2;

		cout << "TYPE THE THIRD NUMBER TO SUBTRACT: ";
		cin >> num3;

		cout << "TYPE THE FOURTH NUMBER TO SUBTRACT: ";
		cin >> num4;

		resul = num1 - num2 - num3 - num4;

		cout << "OPERATION RESULT: " << resul << endl;
		break;
		
	case 3: // User chose to multiply.
		cout << "TYPE THE FIRST NUMBER TO MULTIPLY: ";
		cin >> num1;

		cout << "TYPE THE SECOND NUMBER TO MULTIPLY: ";
		cin >> num2;

		cout << "TYPE THE THIRD NUMBER TO MULTIPLY: ";
		cin >> num3;

		cout << "TYPE THE FOURTH NUMBER TO MULTIPLY: ";
		cin >> num4;

		resul = num1 * num2 * num3 * num4;

		cout << "OPERATION RESULT: " << resul << endl;
		break;

	case 4: // User chose to divide.
		cout << "TYPE THE FIRST NUMBER TO DIVIDE: ";
		cin >> num1;

		cout << "TYPE THE SECOND NUMBER TO DIVIDE: ";
		cin >> num2;

		cout << "TYPE THE THIRD NUMBER TO DIVIDE: ";
		cin >> num3;

		cout << "TYPE THE FOURTH NUMBER TO DIVIDE: ";
		cin >> num4;

		resul = num1 / num2 / num3 / num4;

		cout << "OPERATION RESULT: " << resul << endl;
		break; 

	default: // This function is used when the user types something that is outside the logic of the code.
		cout << "WRONG OPTION!" << endl;
		cout << "SYSTEM FINALIZED!" << endl;
		break;
	}

	goto begin; // This function returns to the beginning of the code.
}