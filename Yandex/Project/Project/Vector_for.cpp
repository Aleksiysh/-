#include <iostream>
#include <vector>
//#include "Vector_for.h"
using namespace std;

void step3() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i += 2) {
		cout << a[i] << " ";
	}
}

void step4() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			cout << a[i] << " ";
	}
}

void step5() {
	int n, number = 0;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] > 0)
			number++;
	}
	cout << number;
}

void step6() {
	int n, number = 0;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i - 1])
			cout << a[i] << " ";
	}
}

void step7() {
	int n, number = 0;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		if (a[i] * a[i - 1] >= 0) {
			if (a[i - 1] < a[i])
				cout << a[i - 1] << " " << a[i] << " ";
			else
				cout << a[i] << " " << a[i - 1] << " ";
			break;
		}
	}
}

void step8() {
	int n, min_pos_element = INT16_MAX;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i]>0 && a[i]<min_pos_element) {
			min_pos_element = a[i];
		}
	}
	cout << min_pos_element;
}