#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype> // isdigit() 함수를 위해 추가

using namespace std;

int N;
string s;
vector<string> serials;

int getSum(const string& s)
{
	int sum = 0;
	for (char c : s)
	{
		// 문자가 숫자인지 확인
		if (isdigit(c))
		{
			// 문자 '0'을 빼서 실제 숫자 값으로 변환
			sum += c - '0';
		}
	}
	return sum;
}

bool cmp(const string& a, const string& b)
{
	// 1. 길이가 다르면 짧은 것이 먼저 온다.
	if (a.length() != b.length())
	{
		return a.length() < b.length();
	}

	// 2. 길이가 같다면 숫자의 합을 비교해서 작은 합을 가진 것이 먼저 온다.
	int aSum = getSum(a);
	int bSum = getSum(b);
	if (aSum != bSum)
	{
		return aSum < bSum;
	}

	// 3. 길이와 합이 모두 같다면 사전순으로 비교
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(false); // 입출력 속도 향상
	cin.tie(NULL);

	cin >> N;

	serials.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> serials[i];
	}

	sort(serials.begin(), serials.end(), cmp);

	for (const string& s : serials)
	{
		cout << s << "\n";
	}

	return 0;
}