
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, temp = 0;
	queue<int> Q;
	
	int even_number = 1;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		Q.push(i);
	}

	while (Q.size() != 1)
	{
		if (even_number % 2 != 0)
		{
			Q.pop();
			++even_number;
		}
		else
		{
			temp = Q.front();
			Q.pop();
			Q.push(temp);
			++even_number;
		}
	}

	cout << Q.front();
	return 0;
}