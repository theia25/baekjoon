#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int A[51], B[51];

int desc(int a, int b)
{
	return a > b;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; ++i)
	{
		cin >> B[i];
	}

	sort(A, A + N, desc);

	sort(B, B + N);

	int total = 0;

	for (int i = 0; i < N; ++i)
	{
		total += A[i] * B[i];
	}

	cout << total;

	return 0;
}
