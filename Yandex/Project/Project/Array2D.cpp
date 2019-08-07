#include <iostream>
#include <vector>
#include "Array2D.h"
using namespace std;

int step8_3()
{
	int n, m, n_max = 0, m_max = 0;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));

	//int a[100][100];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (a[i][j] > a[n_max][m_max])
			{
				n_max = i;
				m_max = j;
			}
	cout << n_max << " " << m_max;

	return 0;
}

int step8_4() {
	int n;
	cin >> n;
	vector<vector<char>> a(n, vector<char>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (i == n / 2 || j == n / 2 || i == j || i == n - j - 1)
				a[i][j] = '*';
			else
				a[i][j] = '.';
		}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}

int step8_5()
{
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = abs(i - j);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}

int step8_6() {
	int n, m, i, j;
	int tmp;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int k = 0; k < n; k++)
		for (int l = 0; l < m; l++)
			cin >> a[k][l];
	cin >> i >> j;
	for (int k = 0; k < n; k++) {
		tmp = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = tmp;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}

int step8_7() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	bool flag = true;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (a[i][j] != a[j][i])
				flag = false;
	if (flag)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}

int step8_8() {
	int n, k;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	cin >> k;
	if (k > 0)
		for (int i = k; i < n; i++)
			cout << a[i][i - k] << " ";
	else if (k == 0)
		for (int i = 0; i < n; i++)
			cout << a[i][i] << " ";
	else
		for (int i = 0; i < n + k; i++)
			cout << a[i][i - k] << " ";

	return 0;
}

int step8_9() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << a[j][i] << " ";
		cout << endl;
	}
	return 0;
}

int step8_10() {
	int n, m, k, row = 0, count = 0;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	cin >> k;
	for (int i = 0; i < n; i++) {
		if (row != 0)
			break;
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0) {
				count++;
				if (count >= k) {
					row = i + 1;
					break;
				}
			}
			else {
				count = 0;
			}
		}
		count = 0;
	}
	cout << row;

	return 0;
}

int step8_11() {
	int n, m;
	//cin >> n >> m;
	n = 3; m = 4;
	vector<vector<int>> a{
		{11,12,13,14},
		{21,22,23,24},
		{31,32,33,34}
	};
	/*for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}*/
	for (int i = 0; i < m; i++) {
		for (int j = n - 1; j >= 0; j--)
			cout << a[j][i] << " ";
		cout << endl;
	}
	return 0;
}

//printf();
int step8_12() {
	int n, m, j = 0, inc = 1, num = 1;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		if (i % 2 == 0)
			for (int j = 0; j < m; j++) {
				a[i][j] = num;
				num++;
			}
		else
			for (int j = m - 1; j >= 0; j--) {
				a[i][j] = num;
				num++;
			}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%4d", a[i][j]);
		cout << endl;
	}
	return 0;
}

int step8_13() {
	int n, m;
	int count = 1;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n + m - 1; i++)
	{
		for (int k = 0; k < n; k++)
			for (int l = 0; l < m; l++)
				if (k + l == i) {
					a[k][l] = count;
					count++;
				}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%4d", a[i][j]);
		cout << endl;
	}
	return 0;
}

int step8_14() {
	int n, m;
	int count = 1;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if ((i + j) % 2 == 0) {
				a[i][j] = count;
				count++;
			}
			else
				a[i][j] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%4d", a[i][j]);
		cout << endl;
	}
	return 0;
}

int step8_15() {
	int n, m;
	int i = 0, j = -1;
	int count = 1;
	int course = 0;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	while (count<=m*n) {
		if (course == 0) {			//вправо
			if (j < m - 1 && a[i][j + 1] == 0) {
				j++;
				a[i][j] = count;
				count++;
			}
			else
				course = (course + 1) % 4;
		}
		else if (course == 1) {		//вниз
			if (i < n - 1 && a[i+1][j] == 0) {
				i++;
				a[i][j] = count;
				count++;
			}
			else
				course = (course + 1) % 4;
		}
		else if (course == 2) { //влево
			if (j > 0 && a[i][j -1] == 0) {
				j--;
				a[i][j] = count;
				count++;
			}
			else
				course = (course + 1) % 4;
		}
		else {				//вверх
			if (i > 0 && a[i - 1][j] == 0) {
				i--;
				a[i][j] = count;
				count++;
			}
			else
				course = (course + 1) % 4;
		}
}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			printf("%4d", a[i][j]);
		cout << endl;
	}
	return 0;
}