#include"mytriangle.h"
bool is_valid(double side1, double side2, double side3) {
	if (side1 <= 0 || side2 <= 0 || side3 <= 0 || side1 + side2 <= side3
		|| side1 + side3 <= side2 || side2 + side3 <= side1) {
		return false;
	}
	else { return true; }
}
double area(double side1, double side2, double side3) {
	int s = (side1 + side2 + side3) / 2.0;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}