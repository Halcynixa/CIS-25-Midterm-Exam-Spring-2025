#include <iostream>
using namespace std;

bool isPrime(int value) {
	if (value == 2 || value == 3 || value == 5 || value == 7) { //manually check all prime numbers 7 and below
		return true;
	}
	else if (value % 2 != 0 && value % 3 != 0 && value % 5 != 0 && value % 7 != 0) { // if value > 7, see if there's remainder when dividing by the values. if there is, return true
		return true;
	}
	else {
		return false; // value must not a prime number
	}
}
int main() {
	cout << isPrime(5) << endl; // true (manual check)
	cout << isPrime(23) << endl; // true (23 % 2 = 1, 23 % 3 = 2, 23 % 5 = 3, 23 % 7 = 2)
	cout << isPrime(12) << endl; // false (12 % 2 and 12 % 3 = 0)
	return 0;
}
