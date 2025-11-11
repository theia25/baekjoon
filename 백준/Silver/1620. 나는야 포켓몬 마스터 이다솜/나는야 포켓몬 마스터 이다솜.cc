#include <bits/stdc++.h>
#include <unordered_map>
#include <cctype>

using namespace std;

unordered_map<string, int> nameDict;
vector<string> nameList;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M, i = 1;
	string name;

	cin >> N >> M;

	while (N--)
	{
		cin >> name;
		nameList.push_back(name);
		nameDict.insert({ name, i });
		++i;
	}

	string ques;

	while (M--)
	{
		cin >> ques;
		if (isdigit(ques[0]))
		{
			cout << nameList[stoi(ques) - 1] << "\n";
		}
		else
		{
			cout << nameDict[ques] << "\n";
		}
	}


	return 0;
}
