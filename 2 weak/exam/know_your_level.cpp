
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vistied[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vistied[s] = true;
    level[s] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (vistied[v] == true)
                continue;
            q.push(v);
            vistied[v] = true;
            level[v] = level[u] + 1;
        }
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
        adj[v].push_back(u);
    }
    bfs(0);
    int k;
    cin >> k;

    int flag = 0;

    for (int i = 0; i < n; i++)
    {

        if (k == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if (level[i] == k)
            {
                cout << i << " ";
                flag = 1;
                // break;
            }
        }
        if (!flag)
        {
            cout << "-1";
        }
    }

    return 0;
}