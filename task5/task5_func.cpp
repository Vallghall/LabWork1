#include <math.h> 
double fun(double x, double y)
{
	return pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
}
