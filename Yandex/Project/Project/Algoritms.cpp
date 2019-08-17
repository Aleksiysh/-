#include "Algoritms.h"
#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
using namespace std;

int step12_3()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (size_t i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (auto now : a)
		cout << now << " ";
	return 0;
}

int step12_4()
{
	int n, size, count = 0;
	cin >> size >> n;	
	vector<int> a(n);
	for (size_t i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (size_t i = 0; i < n; i++) {
		if (a[i] >= size) {
			count++;
			size = a[i] + 3;
		}
	}
	cout << count;
	return 0;
}

int step12_5()
{
	return 0;
}
