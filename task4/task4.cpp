#include <iostream>
#include <math.h>
using namespace std;
double result;
double x = 10;
double y = 7;
void fun();
void main()
{ 
	fun();
	cout << "x = " << x << '\n' << "y = " << y << '\n' << "f = " << round(result * 10000) / 10000 << endl;
	cout << "Write in x: ";
	cin >> x;
	cout << "Write in y: ";
	cin >> y;
	fun();
	cout << "x = " << x << '\n' << "y = " << y << '\n' << "f = " << round(result * 10000) / 10000 << endl;
}
void fun()
{
	result = pow(cos(x), 4) + pow(sin(y), 2) + 0.25 * pow(sin(2 * x), 2) - 1;
}
