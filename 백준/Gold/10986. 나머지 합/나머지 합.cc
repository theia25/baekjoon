#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, temp;
    long result = 0;

    cin >> N >> M;

    vector<long> S(N, 0);
    vector<long> C(M, 0);

    cin >> S[0];

    for (int i = 1; i < N; ++i)
    {
        cin >> temp;
        S[i] = S[i-1] + temp;
    }

    for (int i = 0; i < N; ++i)
    {
        S[i] = S[i] % M;
        if (S[i] == 0)
        {
            ++result;
        }
        ++C[S[i]];
    }

    for (int i = 0; i < M; ++i)
    {
        if (C[i] > 1)
        {
            result = result + (C[i] * (C[i] - 1) / 2);
        }
    }

    cout << result << '\n';

    return 0;
}