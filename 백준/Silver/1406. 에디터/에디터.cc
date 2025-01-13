#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<char> stringList;
	
	string str;
	getline(cin, str);

	int n = 0;
	while (true)
	{
		if (str[n] == '\0')
			break;
		stringList.push_back(str[n]);
		n++;
	}

	list<char>::iterator strIter = stringList.end();

	int m;
	cin >> m;

	char a = '\0';
	char b = '\0';
	
	for (int i = 0; i < m; ++i)
	{
		cin >> a;

		switch (a)
		{
		case 'L':
			if(strIter != stringList.begin())
				strIter--;
			break;
		case 'D':
			if (strIter != stringList.end())
				strIter++;
			break;
		case 'B':
			if (strIter != stringList.begin())
			{
				strIter--;
				strIter = stringList.erase(strIter);
			}
			break;
		case 'P':
			cin >> b;
			strIter = stringList.insert(strIter, b);
			strIter++;
			break;
		}
	}
	
	for (auto it : stringList)
		cout << it;

	return 0;
}