#include "Strings.h"
#include <iostream>
#include <string>
using namespace std;

int step10_3()
{
	char a;
	cin >> a;
	cout << (a >= '0' && a <= '9' ? "yes" : "no");
	return 0;
}

int step10_4()
{
	char a;
	cin >> a;
	cout << (char)(a >= 'a'&&a <= 'z' ? (a - 'a') + 'A' : a);
	return 0;
}

int step10_5()
{
	char a;
	cin >> a;
	if (a >= 'a'&&a <= 'z')
		cout << (char)((a - 'a') + 'A');
	else if (a >= 'A'&&a <= 'Z')
		cout << (char)((a - 'A') + 'a');
	else
		cout << a;	
	return 0;
}
