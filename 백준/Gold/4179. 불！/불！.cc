#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string ground[1000];
int street[1000][1000];
int fire[1000][1000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int R, C;
	cin >> R >> C;

	queue<pair<int, int>> QJihun;
	queue<pair<int, int>> QFire;

	for (int i = 0; i < R; ++i)
	{
		cin >> ground[i];

		for (int j = 0; j < C; ++j)
		{
			if (ground[i][j] == 'J')
			{
				QJihun.push({ i, j });
				street[i][j] = 1;
			}
			else if (ground[i][j] == 'F')
			{
				QFire.push({ i, j });
				fire[i][j] = 1;
			}
		}
	}

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	
	pair<int, int> cur;
	int nx, ny;

	while (!QFire.empty())
	{
		cur = QFire.front();
		QFire.pop();

		for (int i = 0; i < 4; ++i)
		{
			nx = cur.X + dx[i];
			ny = cur.Y + dy[i];

			if (nx < 0 || nx >= R || ny < 0 || ny >= C)
				continue;
			if (ground[nx][ny] != '.' || fire[nx][ny] != 0)
				continue;

			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			QFire.push({ nx, ny });
			// cout << nx << ":" << ny << "=>" << fire[nx][ny] << "\n";
		}
	}

	int canGo = 0;

	while (!QJihun.empty())
	{
		cur = QJihun.front();
		QJihun.pop();

		for (int i = 0; i < 4; ++i)
		{
			nx = cur.X + dx[i];
			ny = cur.Y + dy[i];
			canGo = street[cur.X][cur.Y] + 1;

			if (nx < 0 || nx >= R || ny < 0 || ny >= C)
			{
				cout << street[cur.X][cur.Y];
				return 0;
			}
	

			if (ground[nx][ny] != '.' || street[nx][ny] != 0)
				continue;

			if (canGo >= fire[nx][ny] && fire[nx][ny] > 0)
				continue;

			street[nx][ny] = street[cur.X][cur.Y] + 1;
			QJihun.push({ nx, ny });

			// cout << nx << ":" << ny << "=>" << street[nx][ny] << "\n";
		}
	}

	cout << "IMPOSSIBLE";
	return 0;
}