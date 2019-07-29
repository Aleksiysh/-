#include <iostream>
using namespace std;

int Fibonachy(int n);
int NFibonachy(int f);
int newSeries();

int main() {
	int n;
	//cin >> n;
	cout << newSeries();

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
	} while (number!=0);
	
	return maxSeries;
}