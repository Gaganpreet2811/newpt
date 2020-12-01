#include <bits/stdc++.h>
#define pb push_back
using namespace std;



int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<string>v;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.pb(s);
	}

	map<char, char>m;

	for (int i = 0; i < n; i++)
	{

		m[v[i][0]] = v[i][2];
	}

	map<char, int>ma;
	string res = "";
	char c;
	for (int i = 0; i < n; i++)
	{
		ma[v[i][2]]++;
	}
	for (int i = 0; i < n; i++)
	{
		if (ma[v[i][0]] == 0)
		{
			c = v[i][0];
			break;
		}
	}
	res += c;
	// for (auto i : m)
	// 	cout << i.first << " " << i.second << endl;
	while (m[c])
	{

		res += m[c];
		c = m[c];
	}
	cout << res << endl;
}
