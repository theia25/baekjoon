#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int res = 0;
	string str;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		stack<char> s;

		for (char c : str)
		{
			if (s.empty())
			{
				s.push(c);
				continue;
			}
			else
			{
				if (s.top() == c)
				{
					s.pop();
				}
				else
				{
					s.push(c);
				}
			}
		}
		if (s.empty())
			res++;
	}

	cout << res;

	return 0;
}