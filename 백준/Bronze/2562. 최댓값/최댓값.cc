#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int max = -1, idx = -1, n = 0;

	for (int i = 1; i <= 9; ++i)
	{
		cin >> n;
		if (n > max)
		{
			max = n;
			idx = i;
		}
	}

	cout << max << "\n" << idx;

	return 0;
}