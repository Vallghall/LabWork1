#include <iostream>
#include <math.h>
using namespace std;
extern double x, y, result;
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