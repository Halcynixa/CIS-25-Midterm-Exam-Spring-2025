#include <iostream>
using namespace std;

bool isPrime(int value) {
	if (value == 2 || value == 3 || value == 5 || value == 7) {
		return true;
	}
	else if (value % 2 != 0 && value % 3 != 0 && value % 5 != 0 && value % 7 != 0) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	cout << isPrime(5) << endl; // true
	cout << isPrime(23) << endl; // true
	cout << isPrime(12) << endl; // false
	return 0;
}
