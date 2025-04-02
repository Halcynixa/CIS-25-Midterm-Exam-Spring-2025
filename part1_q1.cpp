#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
	return length * width; // return product of length and width together
}

int main() {
  cout << "Area of rectangle: " << calculateArea(4,5); // Example usage, outputs 20 (4 * 5)
  return 0;
}
