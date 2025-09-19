#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(21);

	for (int i = 1; i <= 20; ++i)
	{
		v[i] = i;
	}

	int a, b;
	stack<int> tmp;

	for (int i = 0; i < 10; ++i)
	{	
		cin >> a >> b;
		for (int k = a; k <= b; ++k)
		{
			tmp.push(v[k]);
		}

		for (int j = a; j <= b; ++j)
		{
			v[j] = tmp.top();
			tmp.pop();
		}

	}

	for (int i = 1; i <= 20; ++i)
	{
		cout << v[i] << " ";
	}

	return 0;
}