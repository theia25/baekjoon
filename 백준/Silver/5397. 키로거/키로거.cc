#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int L = 0;
	cin >> L;

	int strLength = 0;
	string str = "";
	list<char> strList;
	list<string> resultList;
	list<char>::iterator cursor = strList.end();
	while (L--)
	{
		strList.clear();
		cursor = strList.end();
		cin >> str;

		for (auto c : str)
		{
			switch (c)
			{
			case '<':
				if (cursor != strList.begin())
					cursor--;
				break;
			case '>':
				if (cursor != strList.end())
					cursor++;
				break;
			case '-':
				if (cursor != strList.begin())
				{
					cursor--;
					cursor = strList.erase(cursor);
				}
				break;
			default:					
				strList.insert(cursor, c);
				break;
			}
		}

		for (list<char>::iterator iter = strList.begin(); iter != strList.end(); ++iter)
		{ 
			cout << *iter;
		}
		cout << '\n';
	}
	return 0;
}