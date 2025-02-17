#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> DQ;
	int N;
	cin >> N;
	for (int i = 1; i <= N; ++i)
	{
		DQ.push_back(i);
	}

	int n, count = 0;
	cin >> n;
	while (n--)
	{
		int i;
		cin >> i;

		if (DQ.front() == i)
		{
			DQ.pop_front();
			continue;
		}

		int idx = find(DQ.begin(), DQ.end(), i) - DQ.begin();

		while (DQ.front() != i)
		{
			if (idx > DQ.size() - idx)
			{
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}
			else
			{
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			count++;
		}

		DQ.pop_front();
	}

	cout << count;

	return 0;
}