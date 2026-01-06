#include <bits/stdc++.h>
using namespace std;

int n;
bool res = true;
stack<int> s;
vector<char> result;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    vector<int> v(n, 0);
    
    for(int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    int num = 1;
    
    for(int i = 0; i < n; ++i)
    {
        int cur = v[i];
        if(cur >= num)
        {
            while(cur >= num)
            {
                s.push(num++);
                result.push_back('+');
            }
            s.pop();
            result.push_back('-');
        }
        else
        {
            int top = s.top();
            s.pop();
            
            if(cur < top)
            {
                cout << "NO";
                res = false;
                break;
            }
            else
            {
                result.push_back('-');
            }
        }
    }
    
    if(res)
    {
        for(int i = 0; i < result.size(); ++i)
        {
            cout << result[i] << '\n';
        }
    }
    
    
    return 0;
}