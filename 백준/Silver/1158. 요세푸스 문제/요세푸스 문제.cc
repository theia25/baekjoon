
#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	list<int> circle_list;

	for (int i = 1; i <= N; ++i)
	{
		circle_list.push_back(i);
	}

	list<int>::iterator iter = circle_list.begin();

	cout << "<";

	while (circle_list.size() != 1)
	{
		for (int i = 1; i < K; ++i)
		{
			++iter;
			if (iter == circle_list.end())
				iter = circle_list.begin();
		}

		cout << *iter << ", ";
		iter = circle_list.erase(iter);

		// list의 erase는 삭제된 원소의 다음 원소의 iter위치를 반환한다.
		if (iter == circle_list.end())
			iter = circle_list.begin();
	}
	cout << circle_list.front();
	cout << ">";
	circle_list.pop_back();

	return 0;
}