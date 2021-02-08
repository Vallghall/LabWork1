#include <iostream>
#include <math.h>
using namespace std;
double fun(double x, double y)
{
	return pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
}
void main()
{
	double x = 10;
	double y = 7;
	double f = fun(x, y);
	cout << "x = " << x << '\n' << "y = " << y << '\n' << "f = " << round(f * 10000) / 10000 << endl;
	cout << "Write in x: ";
	cin >> x;
	cout << "Write in y: ";
	cin >> y;
	f = fun(x, y);
	cout << "x = " << x << '\n' << "y = " << y << '\n' << "f = " << round(f * 10000) / 10000 << endl;
}
