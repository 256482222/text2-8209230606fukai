
#include "mytemperature.h"
double celsius_to_fah(double cel) {
	double i = 32 + cel * 1.8;
		return i;


}
double fahrenheit_to_cels(double fah) {
	double i = (fah - 32) / 1.8;
	return i;
}