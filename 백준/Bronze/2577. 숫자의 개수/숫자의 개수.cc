#include <bits/stdc++.h>
using namespace std;
int input;
int result = 1;
int num[10] = {};
int main()
{
	for (int i = 0; i < 3; ++i)
	{
		cin >> input;
		result *= input;
	}

	string str = to_string(result);

	for (char c : str)
	{
		num[c - '0']++;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << num[i] << '\n';
	}

	return 0;
}