#include <math.h>
double result;
double x = 10;
double y = 7;
void fun()
{
	result = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
}
