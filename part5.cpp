#include<iostream>
using namespace std;

int main() {
	float x, z;
	char op;
	cout << "Enter first digit: \n";
	cin >> x;
	cout << "Enter operand (+ - * /): \n";
	cin >> op;
	cout << "Enter second digit: \n";
	cin >> z;
	cout << "---------\n";
	switch (op) {
	case '+':
		cout << x + z;
		break;
	case '-':
		cout << x - z;
		break;
	case '*':
		cout << x * z;
		break;
	case '/':
		cout << x / z;
		break;
	default:
		cout << "This calcuator does not support that operand.";
	}
}
