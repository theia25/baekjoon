
#include <iostream>
#include <utility>
#include <queue>
using namespace std;

#define X first
#define Y second

string board[100];
int vis[100][100];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		cin >> board[i];

		fill(vis[i], vis[i] + m, -1);
	}
	
	queue<pair<int, int>> Q;
	Q.push({ 0, 0 });
	vis[0][0] = 0;

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int nx = cur.X + dx[i];
			int ny = cur.Y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (board[nx][ny] != '1' || vis[nx][ny] != -1)
				continue;

			Q.push({ nx, ny });
			vis[nx][ny] = vis[cur.X][cur.Y] + 1;
		}
	}
		
	cout << vis[n - 1][m - 1] + 1;

	return 0;
}
