#include <iostream>
#include <clocale>
#include <windows.h>

using namespace std;

int main() {
	int main() {
		int a = 0, b = 1, i = 0, n;
		cin >> n;
		while (i < n) {
			i++;
			b = a + b;
			a = b - a;
		}
		cout << a;
		return 0;
	}
}

//setlocale(LC_ALL, "Rus");
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);
//
//cin.get();
//cout << "\n Press Enter";
//cin.get();
