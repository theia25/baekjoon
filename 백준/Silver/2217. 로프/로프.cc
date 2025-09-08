#include <iostream>
#include <algorithm>

using namespace std;

int N;
int w[100005];

int main()
{
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> w[i];
	}

	sort(w, w + N);

	int ans = 0;

	for (int i = 1; i <= N; ++i)
	{
		ans = max(ans, w[N - i] * i);
	}

	cout << ans;

	return 0;
}
