// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
	char op;
	float num1, num2;

	// Allowing user to choose operators 
	// i.e. +, -, *, /
	cout<<"SELECT DESIRED OPERATOR"<<endl;
	cin >> op;  //taking input from user for operator

	// enter both numbers
	cout<<"Enter the operands "<<endl;
	cin >> num1 >> num2;

	// Switch statement begins
	switch (op) {
	// If user enter +
	case '+':
		cout << num1 + num2;
		break;

	// If user enter -
	case '-':
		cout << num1 - num2;
		break;

	// If user enter *
	case '*':
		cout << num1 * num2;
		break;

	// If user enter /
	case '/':
		cout << num1 / num2;
		break;

	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}
	// switch statement ends

	return 0;
}
