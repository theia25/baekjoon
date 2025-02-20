
#include <iostream>
#include <utility>
#include <queue>
using namespace std;

#define X first
#define Y second

int paper[500][500];
bool vis[500][500];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int maxSize = 0;
	int size = 0;
	int count = 0;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> paper[i][j];
		}
	}

	queue<pair<int, int>> Q;

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (paper[i][j] != 1 || vis[i][j] == 1)
				continue;

			vis[i][j] = 1;
			Q.push({ i, j });

			while (!Q.empty())
			{
				pair<int, int> cur = Q.front();
				Q.pop();
				size++;

				for (int i = 0; i < 4; ++i)
				{
					int nx = cur.X + dx[i];
					int ny = cur.Y + dy[i];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (vis[nx][ny] == 1 || paper[nx][ny] == 0)
						continue;
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}

			maxSize = max(maxSize, size);
			size = 0;
			count++;

		}
	}

	cout << count << "\n";
	cout << maxSize << "\n";

	return 0;
}
