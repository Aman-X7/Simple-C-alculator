// C++ program to create calculator using
// switch statement
#include <iostream>
using namespace std;

// Driver code
int main()
{
	char opr;
	float n1, n2;

	// Allowing user to Enter operators 
	// i.e. +, -, *, /
	cout<<"SELECT DESIRED OPERATOR"<<endl;
	cin >> opr;  //taking input from user for operator

	// enter both numbers
	cout<<"Enter the operands "<<endl;
	cin >> n1 >> n2;

	// Using Switch Staement for selection of operator
	switch (opr) {
	// If entry is  +
	case '+':
		cout << n1 + n2;
		break;

	// If entry is -
	case '-':
		cout << n1 - n2;
		break;

	// If  entry is  *
	case '*':
		cout << n1 * n2;
		break;

	// If  entry is /
	case '/':
		cout << n1 / n2;
		break;

	// If the operator is not one of than +, -, * or /,
	// error message will  be displayed
	default:
		cout << "Error! operator is not valid ";
	}
	// switch statement ends here

	return 0;
}
