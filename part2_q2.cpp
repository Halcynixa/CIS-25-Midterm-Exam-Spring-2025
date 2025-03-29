#include <iostream>
using namespace std;

int main() {
	string array [10]; // declare array size of 10
	int x = 0;
	string input;
	while (x < 10) {
		cout << "Enter something until array is full: \n";
		cin >> input;
		array[x] = input;
		x += 1;
	}
	cout << "----\n";
	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl; // print the array
	}
}
