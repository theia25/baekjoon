
#include <iostream>

int n;
int cnt = 0;

bool arrY[15]; // Y값이 동일한지 확인

bool arrRU[29]; // 오른쪽 위 대각선 / 에 있는지 확인

bool arrRD[29]; // 오른쪽 아래 다각선에 있는지 확인

// k번째 퀸 놓기
void NQueen(int k)
{
	// n번째 퀸까지 모두 놓은 경우 cnt + 1
	if (k == n)
	{
		++cnt;
		return;
	}

	for (int i = 0; i < n; ++i)
	{
		// 같은 열, 대각선 중에 퀸을 이미 놓은 경우 contnue
		if (arrY[i] || arrRU[k + i] || arrRD[k - i + n - 1])
			continue;

		arrY[i] = 1;
		arrRU[k + i] = 1;
		arrRD[k - i + n - 1] = 1;

		NQueen(k + 1);

		arrY[i] = 0;
		arrRU[k + i] = 0;
		arrRD[k - i + n - 1] = 0;
	}
}


int main()
{
	std::cin >> n;

	NQueen(0);

	std::cout << cnt;

	return 0;
}
