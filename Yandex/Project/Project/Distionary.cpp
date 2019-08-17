#include "Distionary.h"
#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
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
	int n, x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		s.insert(x);
	}
}
int step11_5()
{
	set <int> s1, s2;
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
			cout << s << " ";
	return 0;
}

int step11_7()
{
	map<string, string> mapStr;
	int n;
	string word, key, value;
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

vector<string> split(string str, string sep) {
	vector<string> res;
	int begin = 0, end = 0;
	str += sep;
	while ((end = str.find(sep, begin)) != -1) {
		res.emplace_back(str.substr(begin, end - begin));
		begin = end + sep.size();
	}
	return res;
}
string join(vector<string> arr,string sep) {
	if (arr.size() == 0)
		return "";
	string str = arr[0];
	for (int i = 1; i < arr.size(); i++)
		str += sep + arr[i];
	return str;
}
int step11_8()
{
	map<string, vector<string>> englishLatin, latinEnglish;
	string record, key;
	vector<string> value;
	int n;
	string first;
	cin >> n;

	getline(cin, first);
	for (int i = 0; i < n; i++) {
		getline(cin, record);
		first = record.substr(0, record.find(" - "));
		englishLatin[first] = split(record.substr(first.size() + 3), ", ");
	}
	for (auto word : englishLatin) {
		for (int i = 0; i < word.second.size(); i++)
		{
			key = word.second[i];
			latinEnglish[key].push_back(word.first);
		}		
	}
	cout << latinEnglish.size()<<endl;
	for (auto element : latinEnglish)
		cout << element.first << " - " << join(element.second, ", ")<<"\n";
	return 0;
}
