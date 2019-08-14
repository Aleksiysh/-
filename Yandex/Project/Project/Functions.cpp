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

#pragma region step9_4
double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
int step9_4() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2);
	return 0;
}
#pragma endregion

#pragma region Step9_5
bool IsPointInSquare(double x, double y)
{
	return abs(x) <= 1 && abs(y) <= 1;
}
int step9_5()
{
	double x, y;
	cin >> x >> y;
	cout << ((IsPointInSquare(x, y)) ? "YES" : "NO");
	return 0;
}
#pragma endregion

#pragma region Step9_7
bool IsPointInCircle(double x, double y, double xc, double yc, double r)
{
	return sqrt((xc - x)*(xc - x) + (yc - y)*(yc - y)) <= r;
}
int step9_7()
{
	double x, y, xc, yc, r;
	cin >> x >> y >> xc >> yc >> r;
	cout << (IsPointInCircle(x, y, xc, yc, r) ? "YES" : "NO");
	return 0;
}
#pragma endregion

#pragma region Step9_8
bool IsPointInArea(double x, double y)
{
	return sqrt((-1 - x)*(-1 - x) + (1 - y)*(1 - y)) <= 2 && y >= -x && y >= 2 * x + 2 ||
		sqrt((-1 - x)*(-1 - x) + (1 - y)*(1 - y)) >= 2 && y <= -x && y <= 2 * x + 2;
}
int step9_8()
{
	double x, y;
	cin >> x >> y;
	cout << (IsPointInArea(x, y) ? "YES" : "NO");
	return 0;
}
#pragma endregion

#pragma region Step9_9
double power(double a, int n)
{
	if (n == 0)
		return 1;
	return (n > 0) ? a * power(a, n - 1) : 1 / a * power(a, n + 1);
}
int step9_9()
{
	double a;
	int n;
	cin >> a >> n;
	cout << power(a, n);
	return 0;
}
#pragma endregion

#pragma region Step9_10
int MinDivisor(int n, int d = 2)
{
	if (d <= sqrt(n))
		if (n%d == 0)
			return d;
		else
			MinDivisor(n, d + 1);
	else
		return n;
}
int step9_10()
{
	int n;
	cin >> n;
	cout << MinDivisor(n);
	return 0;
}
#pragma endregion

#pragma region Step9_11
bool IsPrime(int n, int d = 2)
{
	if (d <= sqrt(n) && n > 3)
		if (n%d == 0)
			return false;
		else
			IsPrime(n, d + 1);
	else
		return true;
}
int step9_11()
{
	int n;
	cin >> n;
	cout << (IsPrime(n) ? "YES" : "NO");
	return 0;
}
#pragma endregion

double fastPower(double a, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return fastPower(a*a, n / 2);
	else
		return a * fastPower(a, n - 1);
}
int step9_12()
{
	double a;
	int n;
	cin >> a >> n;
	cout << fastPower(a, n);
	return 0;
}

double recSumm(double sum = 0)
{
	double number;
	cin >> number;
	if (number == 0)
		return sum;
	sum += number;
	return recSumm(sum);
}
int step9_13()
{
	cout << recSumm();
	return 0;
}

int recFibonacci(int n)
{
	if (n < 3)
		return 1;
	return recFibonacci(n-1)+recFibonacci(n-2);
}
int step9_14()
{
	int n;
	cin >> n;
	cout << recFibonacci(n);
	return 0;
}