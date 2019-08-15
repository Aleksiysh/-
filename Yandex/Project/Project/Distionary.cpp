#include "Distionary.h"
#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;

int step11_3()
{
	set <int> s;
	int n;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
	cout << s.size();
	return 0;
}

int step11_4()
{
	set <int> s;
	int n;
	int x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		cout << (s.find(x) == s.end() ? "NO\n" : "YES\n");
		s.insert(x);
	}
	return 0;
}

void CreatSet(set<int> &s) {
	int n,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
}
int step11_5()
{
	set <int> s1,s2;
	int count = 0;
	CreatSet(s1);
	CreatSet(s2);
	for (auto s : s1)
		if (s2.find(s) != s2.end())
			count++;
	cout << count;
	return 0;
}

int step11_6()
{
	set <int> s1, s2;
	int count = 0;
	CreatSet(s1);
	CreatSet(s2);
	for (auto s : s1)
		if (s2.find(s) != s2.end())
			cout<<s<<" ";
	return 0;
}

int step11_7()
{
	map<string, string> mapStr;
	int n;
	string word,key,value;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> key >> value;
		mapStr[key] = value;
	}
	cin >> word;
	for (auto s : mapStr) {
		if (s.second == word)
			cout << s.first;
		if (s.first == word)
			cout << s.second;
	}
	return 0;
}
