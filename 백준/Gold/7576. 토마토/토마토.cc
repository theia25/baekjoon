
#include <iostream>
#include <queue>
#include <utility>

#define X first
#define Y second

using namespace std;

//int day[1000][1000];
int box[1000][1000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int M, N, result = 0;
	queue<pair<int, int>> Q;
	pair<int, int> cur;

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	cin >> M >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			// 공백을 포함한 입력이 주어져서 string으로 받지 않음.
			// -1을 입력받기 위해 int타입으로 설정. (char타입은 음수인 경우 '-'을 입력받음)
			cin >> box[i][j];

			if (box[i][j] == 1)
			{
				Q.push({ i, j });
				//day[i][j] = 1;
			}
		}
		// 모든 칸 -1로 초기화, 방문 안한 곳 -1 표시
		//fill(day[i], day[i] + M, -1);
	}

	//// 모든 토마토가 익지 않은 상태이거나 상자 안에 토마토가 없는 경우
	//if (Q.empty())
	//	result = -1;

	//else

		//cur = Q.front();
		//day[cur.X][cur.Y] = 0;

		while (!Q.empty())
		{
			cur = Q.front();

			for (int i = 0; i < 4; ++i)
			{
				int nx = cur.X + dx[i];
				int ny = cur.Y + dy[i];

				if (nx < 0 || nx >= N || ny < 0 || ny >= M)
					continue;
				//if (day[nx][ny] != -1 || box[nx][ny] == 1 || box[nx][ny] == -1)
				//	continue;
				if (box[nx][ny] != 0)
					continue;

				//Q.push({ nx, ny });
				//day[nx][ny] = day[cur.X][cur.Y] + 1;
				//result = max(result, day[nx][ny]);

				Q.push({ nx, ny });
				box[nx][ny] = box[cur.X][cur.Y] + 1;
				result = max(result, box[nx][ny]);
			}
			Q.pop();
		}
	

	for (int i = 0; i < N; ++i)
	{
		if (result == -1)
			break;

		for (int j = 0; j < M; ++j)
		{
			if (box[i][j] == 0)
			{
				result = -1;
				break;
			}
		}
	}

	if (result == -1)
		cout << "-1";
	else if (result == 0)
		cout << "0";
	else
		cout << result -1;

	return 0;
}