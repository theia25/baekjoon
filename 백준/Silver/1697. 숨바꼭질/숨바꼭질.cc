
#include <iostream>
#include <utility>
#include <queue>

#define X first
#define Y second
using namespace std;

int dist[100002];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	fill(dist, dist + 100001, -1);
	queue<int> Q;
	Q.push(N);
	dist[N] = 0;

	// 동생이 숨은 곳의 값이 갱신되면 반복 종료
	while (dist[K] == -1)
	{
		int cur = Q.front();
		Q.pop();

		for (int nx : {cur - 1, cur + 1, cur * 2})
		{
			if (nx < 0 || nx > 100000)
				continue;

			// 한 번 찾은 곳을 다시 찾는 경우는 없음.
			if (dist[nx] != -1)
				continue;
			Q.push(nx);
			dist[nx] = dist[cur] + 1;
		}
	}
	cout << dist[K];
	return 0;
}