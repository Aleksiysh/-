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

int step10_6()
{
	string str;
	int pos = 0, count = 1;
	getline(cin, str);
	for (auto c : str)
		if (c == ' ')
			count++;
	cout << count;
	return 0;
}

int step10_7()
{
	string str1 = "", str2 = "";
	getline(cin, str1);
	for (int i = 0; i < str1.size(); i++)
		str2 += str1[str1.size() - 1 - i];
	cout << (str1 == str2 ? "yes" : "no");
	return 0;
}

int step10_8()
{
	string str, word;
	int max = 0, end = 0, begin = 0;
	getline(cin, str);
	str += " ";
	while ((end = str.find(' ', begin)) != -1) {
		if (end - begin > max) {
			word = str.substr(begin, end - begin);
			max = end - begin;
		}
		begin = end + 1;
	}
	cout << word;
	return 0;
}

bool IsValidNumber(string word) {
	if (word == "")
		return false;
	for (auto c : word)
		if (c<'0' || c>'9')
			return false;
	if (stoi(word) < 0 || stoi(word) > 255)
		return false;
	return true;
}
int step10_9()
{
	string str, word;
	bool flag = true;
	int begin = 0, end = 0, count = 0;
	getline(cin, str);
	str += '.';
	while ((end = str.find('.', begin)) != -1) {
		count++;
		if (!IsValidNumber(str.substr(begin, end - begin)))
			flag = false;
		begin = end + 1;
	}
	cout << (flag&&count == 4 ? "YES" : "NO");
	return 0;
}