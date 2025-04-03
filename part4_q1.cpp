#include<iostream>
using namespace std;

int main() {
	int x, y, z; // x = first number, y = second number, z = third number
	cout << "Enter first number: \n";
	cin >> x;
	cout << "Enter second number: \n";
	cin >> y;
	cout << "Enter third number: \n";
	cin >> z;
	if (x >= y) {
		if (x >= z) {
			cout << "Largest number: " << x; // x > y and z
		}
	}
	if (y >= x) {
		if (y >= z) {
			cout << "Largest number: " << y; // y > x and z
		}
	}
	if (z >= x) {
		if (z >= y) {
			cout << "Largest number: " << z; // z > x and y
		}
	}
}
