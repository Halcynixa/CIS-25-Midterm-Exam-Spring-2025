#include<iostream>
using namespace std;

int main() {
	float x, z; // 1st and 2nd digit
	char op; // operand (+ - * /)
	cout << "Enter first digit: \n";
	cin >> x;
	cout << "Enter operand (+ - * /): \n";
	cin >> op;
	cout << "Enter second digit: \n";
	cin >> z;
	cout << "---------\n";
	switch (op) {
	case '+': // addition (+)
		cout << x + z;
		break;
	case '-': // subtraction (-)
		cout << x - z;
		break;
	case '*': // multiplication (*)
		cout << x * z;
		break;
	case '/': // division (/)
		cout << x / z;
		break;
	default:
		cout << "This calcuator does not support that operand."; // operand was something else
	}
}
