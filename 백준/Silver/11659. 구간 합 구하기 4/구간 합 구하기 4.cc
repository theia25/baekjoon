#include <bits/stdc++.h>
using namespace std;

int N, M, temp, i, j;
long S[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    for(int t = 1; t <= N; ++t)
    {
        cin >> temp;
        S[t] = S[t - 1] + temp;
    }
    
    for(int t = 1; t <= M; ++t)
    {
        cin >> i >> j;
        cout << S[j] - S[i-1] << '\n';
    }
    
    return 0;
}