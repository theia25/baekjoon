#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> Node;

int N, L, num;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    deque<Node> myDeque;
    
    cin >> N >> L;
    
    for(int i = 0; i < N; ++i)
    {
        cin >> num;
        
        while(myDeque.size() && myDeque.back().first >= num)
        {
            myDeque.pop_back();
        }
        
        myDeque.push_back(Node(num, i));
        
        if(myDeque.front().second <= i - L)
        {
            myDeque.pop_front();
        }
        
        cout << myDeque.front().first << ' ';
    }
    
    
    
    return 0;
}