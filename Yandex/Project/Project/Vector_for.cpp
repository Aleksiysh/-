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
		if (a[i] > 0 && a[i] < min_pos_element) {
			min_pos_element = a[i];
		}
	}
	cout << min_pos_element;
}

int step9() {
	int n, min_odd_element;
	cin >> n;
	vector<int> a;
	int tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (tmp%2 != 0)
			a.push_back(tmp);
	}
	bool flag = false;
	if (a.size() == 0)
	{
		cout << 0;
		return 0;
	}
	min_odd_element = a[0];
	for (int i = 1; i < a.size(); i++) {
		if (a[i] < min_odd_element) {
			min_odd_element = a[i];
		}
	}
	cout << min_odd_element;
	return 0;	
}

int step10() {
	int n, number=1;
	cin >> n;
	vector<int> a(n);
	int tmp;

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	for (int i = 1; i < n; i++) {
		if (a[i] !=a[i-1]) {
			number++;
		}
	}
	cout << number;
	return 0;
}

int step11() {
	int n, number = 1;
	cin >> n;
	vector<int> a(n);
	int tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i+=2) {
		tmp = a[i];
		a[i] = a[i - 1];
		a[i - 1] = tmp;
	}

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";	
	return 0;
}

int step12() {
	int n, number = 1;
	cin >> n;
	vector<int> a(n);
	int tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	tmp = a[n - 1];
	for (int i = n - 1; i > 0; i--)
		a[i] = a[i - 1];
	a[0] = tmp;

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}