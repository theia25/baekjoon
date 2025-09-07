#include <iostream>
#include <algorithm>

using namespace std;

int N;
pair<int, int> Time[100000];
int End;

int main()
{
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> Time[i].first >> Time[i].second;
    }

    sort(Time, Time + N, [](pair<int, int>a, pair<int, int>b) {
            if (a.second == b.second)
            {
                return a.first < b.first;
            }
            return a.second < b.second;
        }
    );

    End = Time[0].second;
    int count = 1;

    for (int i = 1; i < N; ++i)
    {
        if (End <= Time[i].first)
        {
            End = Time[i].second;
            ++count;
        }
    }

    cout << count;

    return 0;
}