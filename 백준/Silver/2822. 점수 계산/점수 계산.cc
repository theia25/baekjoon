#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<pair<int, int>> v(8);
    int total = 0;
    int max[5] = {};
    
    for(int i = 0; i < 8; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    
    for(int i = 0; i < 5; i++)
    {
        total += v[i].first;
        max[i] = v[i].second;
    }
    
    sort(max, max+5);
    
    cout << total << endl;
    for(int i : max)
    {
        cout << i << " ";
    }
    
    return 0;
}