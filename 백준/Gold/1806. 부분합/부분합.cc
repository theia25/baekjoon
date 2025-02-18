#include <bits/stdc++.h>
using namespace std;

int a[100001] = {};
int res = INT_MAX;
int N, S;
int total;

int main()
{
	cin >> N >> S;
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	int en = 0;
	total = a[0];
	for (int st = 0; st < N; ++st)
	{
		while (en < N && total < S)
		{
			en++;

			if (en != N)
				total += a[en];
		}
		if (en == N)
			break;
		
		res = min(res, en - st + 1);
		total -= a[st];
	}
	
	if (res == INT_MAX)
		res = 0;

	cout << res;

	return 0;
}