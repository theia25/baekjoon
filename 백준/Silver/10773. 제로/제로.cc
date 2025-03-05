
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int K, N, result = 0;
	stack<int> st;
	
	cin >> K;

	for (int i = 0; i < K; ++i)
	{
		cin >> N;

		if (N != 0)
		{
			st.push(N);
			result += N;
		}
			
		else
		{
			N = st.top();
			st.pop();
			result -= N;
		}
	}

	cout << result;

	return 0;
}