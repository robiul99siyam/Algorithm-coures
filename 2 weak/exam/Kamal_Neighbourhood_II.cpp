#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (visited[v] == true)
            continue;
        dfs(v);
    }
}
int main()
{

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int k;
    cin >> k;
    dfs(k);
    int cc = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        cc++;
        visited[i] = false;
    }

    cout << cc - 1 << endl;
    return 0;
}
