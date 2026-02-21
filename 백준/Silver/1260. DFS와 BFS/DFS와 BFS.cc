#include <bits/stdc++.h>

using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;

void DFS(int node);
void BFS(int node);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M, Start;
    
    cin >> N >> M >> Start;
    
    A.resize(N+1);
    visited = vector<bool>(N+1, false);
    
    for(int i = 0; i < M; ++i)
    {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    
    for(int i = 1; i <= N; ++i)
    {
        sort(A[i].begin(), A[i].end());
    }
    
    DFS(Start);
    cout << '\n';
    fill(visited.begin(), visited.end(), false);
    BFS(Start);
    cout << '\n';
    
    return 0;
}

void DFS(int node)
{
    cout << node << " ";
    visited[node] = true;
    
    for(int i : A[node])
    {
        if(!visited[i])
        {
            DFS(i);
        }
    }
}

void BFS(int node)
{
    queue<int> bfsQue;
    bfsQue.push(node);
    visited[node] = true;
    
    while(!bfsQue.empty())
    {
        int nowNode = bfsQue.front();
        bfsQue.pop();
        cout << nowNode << " ";
        for(int i : A[nowNode])
        {
            if(!visited[i])
            {
                visited[i] = true;
                bfsQue.push(i);
            }
        }
    }
}
