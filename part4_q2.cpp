#include<iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter year: \n";
	cin >> year;
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) { // check if year is divisible by 4 and is not disivible by 100 unless it's also divisible by 400 (definition of a leap year)
		cout << year << " is a leap year.\n";
	}
	else {
		cout << year << " is not a leap year.\n";
	}
}
