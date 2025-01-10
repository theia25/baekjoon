#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int input = 0;
	int count = 0;
	cin >> input;

	int num[10] = {};

	while (input > 0)
	{
		num[input % 10]++;
		input /= 10;
	}

	for (int i = 0; i < 10; ++i)
	{
		if (num[i] > count)
		{
			if (i == 6 || i == 9)
			{
				int set = (num[6] + num[9]) % 2;

				if (set == 0)
				{
					set = (num[6] + num[9]) / 2;
				}
				else
				{
					set = (num[6] + num[9]) / 2 + 1;
				}

				if(set > count)
					count = set;
			}
			else
			{
				count = num[i];
			}
		}
	}

	cout << count;

	return 0;
}