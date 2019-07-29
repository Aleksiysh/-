#include <iostream>
using namespace std;

int Fibonachy(int n);
int NFibonachy(int f);
int newSeries();
int kremer();
int kremer2();

int main() {
	kremer2();

	cin.get();
	cin.get();
	return 0;
}

int Fibonachy(int n) {
	int a = 0, b = 1, i = 0;
	while (i < n) {
		i++;
		b = a + b;
		a = b - a;
	}
	return a;

}

int NFibonachy(int f) {
	int a = 0, b = 1, i = 0;
	while (a < f) {
		i++;
		b = a + b;
		a = b - a;
	}
	return (a == f) ? i : -1;
}

int newSeries() {
	int number = 0, prevNumber = 0;
	int series = 1, maxSeries = 1;
	do
	{
		cin >> number;
		if (prevNumber == number) series++;
		else {
			if (maxSeries < series) maxSeries = series;
			series = 1;
		}
		prevNumber = number;
	} while (number != 0);

	return maxSeries;
}

int kremer() {
	double a, b, c, d, e, f;
	double dd, dx, dy;
	cin >> a >> b >> c >> d >> e >> f;
	dd = a * d - b * c;
	dx = e * d - b * f;
	dy = a * f - e * c;
	cout << dx / dd << " " << dy / dd;
	return 0;
}

int kremer2() {
	double a, b, c, d, e, f;
	double dd, dx, dy;
	cin >> a >> b >> c >> d >> e >> f;
	dd = a * d - b * c;
	dx = e * d - b * f;
	dy = a * f - e * c;
	if (dd != 0) {
		cout << 2 << " " << dx / dd << " " << dy / dd;
	}
	else
		if (dx == 0 && dy == 0) {
			if (a == 0 && b == 0 && c == 0 && d == 0)
				if (e != 0 || f != 0)
					cout << 0;
				else
					cout << 5;
			else
				if (a == 0 && c == 0)
					if (b != 0)
						cout << 4 << " " << e / b;
					else
						cout << 4 << " " << f / d;
				else
					if (b == 0 && d == 0)
						if (a != 0)
							cout << 3 << " " << e / a;
						else
							cout << 3 << " " << f / c;
					else
						if (b != 0)
							cout << 1 << " " << e / b << " " << -a / b;
						else
							cout << 1 << " " << f / d << " " << -c / d;
		}
		else
			cout << 0;
	return 0;
}

