#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N = 0;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "*";
		}

		for (int k = 1; k <= N - i; ++k)
		{
			cout << " ";
		}

		for (int k = 1; k <= N - i; ++k)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; ++j)
		{
			cout << "*";
		}
		
		cout << "\n";
	}

	for (int i = N-1; i >= 1; --i)
	{
		for (int j = i; j >= 1; --j)
		{
			cout << "*";
		}

		for (int k = N - i; k >= 1; --k)
		{
			cout << " ";
		}
		for (int k = N - i; k >= 1; --k)
		{
			cout << " ";
		}

		for (int j = i; j >= 1; --j)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}