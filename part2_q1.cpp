#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i < 51; i++) { // Start at 1, end at 50
		if (i % 2 == 0) { // Check if i is an even number by seeing if i mod 2 = 0, or if dividing i by 2 doesn't leave a remainder
			cout << i << "\n"; // Print the number if it is
		}
	}
	return 0;
}
