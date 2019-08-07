#include "Functions.h"
#include <iostream>
#include <cmath>
using namespace std;

#pragma region step9_3 min4(a,b,c,d)
int min2(int a, int b)
{
	return (a < b) ? a : b;	
}

int min4(int a, int b, int c, int d)
{
	return min2(min2(a, b), min2(c, d));
}

int step9_3()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d);
	return 0;
}
#pragma endregion


double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2-x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));	
}

int step9_4() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2);
	return 0;
}

