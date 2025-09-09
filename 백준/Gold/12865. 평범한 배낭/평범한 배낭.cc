#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    // dp[j] = 배낭의 최대 허용 무게가 j일 때의 최대 가치
    vector<int> dp(K + 1, 0);

    for (int i = 0; i < N; ++i) {
        int W, V; // 무게(Weight), 가치(Value)
        cin >> W >> V;

        // 배낭의 최대 무게부터 현재 물건의 무게까지 역순으로 순회
        for (int j = K; j >= W; --j) {
            // 현재 물건을 넣지 않았을 때의 가치 vs 넣었을 때의 가치
            dp[j] = max(dp[j], dp[j - W] + V);
        }
    }

    cout << dp[K] << endl;

    return 0;
}