
#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

deque<int> DQ;
int testCase;
string procedure;
int n;
string inputArr;
int rev;
int errorFlag;

void pushDQ(string& tmp, deque<int>& dq)
{
	int cur = 0;

	for (int i = 1; i + 1 < tmp.size(); ++i)
	{
		if (tmp[i] == ',')
		{
			dq.push_back(cur);
			cur = 0;
		}
		else
		{
			// 10 * cur : 한 자리 수 이상을 받기 위한 연산, '0' == 48
			cur = 10 * cur + (tmp[i] - 48);
		}
	}

	// 배열의 마지막 숫자 뒤에는 ,가 붙지 않음.
	if (cur != 0)
	{
		dq.push_back(cur);
	}
}

void printResult(deque<int>& dq)
{
	cout << '[';

	for (int i = 0; i < dq.size(); ++i)
	{
		cout << dq[i];

		if (i + 1 != dq.size())
			cout << ',';
	}

	cout << "]\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> testCase;
	while (testCase--)
	{
		errorFlag = 0;
		rev = 0;
		DQ.clear();
		cin >> procedure >> n;
		cin >> inputArr;

		pushDQ(inputArr, DQ);

		for (char c : procedure)
		{
			if (c == 'R')
			{
				rev = 1 - rev;
			}
			else
			{
				if (DQ.empty())
				{
					errorFlag = 1;
					break;
				}

				if (rev)
				{
					DQ.pop_back();
				}
				else
				{
					DQ.pop_front();
				}
				
			}
		}

		if (errorFlag == 1)
		{
			cout << "error\n";
		}
		else
		{
			if (rev)
			{
				reverse(DQ.begin(), DQ.end());
			}

			printResult(DQ);
		}
	}

	return 0;
}
