#include"mytemperature.h"
double celsius_to_fah(double cel) {
	return 1.8 * cel + 32;
};
double Fahrenheit_to_cels(double fah) {
	return (fah - 32) / 1.8;
};