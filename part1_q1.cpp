#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
	return length * width; // Multiply the length and width together, as that's how you find the area of a rectangle
}

int main() {
  cout << "Area of rectangle: " << calculateArea(4,5); // Example usage, outputs 20 (4 * 5)
  return 0;
}
