
#include <iostream>

using namespace std;
int Stack[10000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	int ptr = -1;
	int count = 0;
	string str;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> str;

		if (str == "push")
		{
			cin >> K;
			++ptr;
			Stack[ptr] = K;
			++count;
		}
		else if (str == "pop")
		{
			if (count == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << Stack[ptr] << "\n";
				--count;
				--ptr;
			}
		}
		else if (str == "size")
		{
			cout << count << "\n";
		}
		else if (str == "top")
		{
			if (count == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << Stack[ptr] << "\n";
			}
		}
		else
		{
			if (count == 0)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}

	}

	return 0;
}