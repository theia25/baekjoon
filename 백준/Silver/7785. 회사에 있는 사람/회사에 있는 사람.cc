#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

unordered_set<string> s;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string name, log;

	cin >> n;

	while (n--)
	{
		cin >> name >> log;

		if ("enter" == log)
		{
			s.insert(name);
		}
		else
		{
			s.erase(name);
		}
	}

	vector<string> ans(s.begin(), s.end());
	sort(ans.begin(), ans.end(), greater<string>());

	for (auto name : ans)
	{
		cout << name << "\n";
	}

	return 0;
}
