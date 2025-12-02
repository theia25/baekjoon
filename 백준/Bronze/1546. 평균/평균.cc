#include <bits/stdc++.h>

using namespace std;

int N, M = 0;
long Sum = 0;

int A[1001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
		Sum += A[i];
		if (A[i] > M)
			M = A[i];
	}

	double result = Sum * 100.0 / M / N;

	cout << result << '\n';

	return 0;
}