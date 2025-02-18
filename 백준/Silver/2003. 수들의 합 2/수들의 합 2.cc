#include <bits/stdc++.h>
using namespace std;

int a[100001] = {};
int res;
int N, M;
int total;

int main()
{
	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	total = a[0];
	int en = 0;
	for (int st = 0; st < N; ++st)
	{
		while (en < N && total < M)
		{
			en++;
			if (en != N)
			{
				total += a[en];
			}
		}

		if (en == N)
		{
			break;
		}

		if (total == M)
			res++;

		total -= a[st];

	}

	cout << res;

	return 0;
}
