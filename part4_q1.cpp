#include<iostream>
using namespace std;

int main() {
	int x, y, z;
	cout << "Enter first number: \n";
	cin >> x;
	cout << "Enter second number: \n";
	cin >> y;
	cout << "Enter third number: \n";
	cin >> z;
	if (x >= y) {
		if (x >= z) {
			cout << "Largest number: " << x;
		}
	}
	if (y >= x) {
		if (y >= z) {
			cout << "Largest number: " << y;
		}
	}
	if (z >= x) {
		if (z >= y) {
			cout << "Largest number: " << z;
		}
	}
}
