#include <bits/stdc++.h>
using namespace std;

int N, M, temp, i, j;
int S[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    for(int k = 1; k <= N; ++k)
    {
        cin >> temp;
        S[k] = S[k - 1] + temp;
    }
    
    for(int k = 0; k < M; ++k)
    {
        cin >> i >> j;
        cout << S[j] - S[i - 1] <<  '\n';
    }
    
    return 0;
}