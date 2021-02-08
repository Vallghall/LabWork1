#include <iostream>
#include <math.h>
using namespace std;
double fun(double, double);
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