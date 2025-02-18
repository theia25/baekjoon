#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	int a[100001] = {};

	cin >> N >> M;
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
	sort(a, a + N);

	int en = 0;
	int res = INT_MAX;
	for (int st = 0; st < N; ++st)
	{	
		while (en < N && (a[en] - a[st])< M)
		{
			en++;
		}
			
		if (en == N)
			break;
		
		res = min(res, a[en] - a[st]);
	}

	cout << res;

	return 0;
}