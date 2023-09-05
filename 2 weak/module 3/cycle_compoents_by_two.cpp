// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// vector<int> adj[N];
// bool visited[N];
// bool dfs(int u, int p = -1)
// {
//     bool cycleExit = false;
//     visited[u] = true;
//     for (int v : adj[u])
//     {
//         if (v == p)
//             continue;
//         if (visited[v] == true)
//             return true;

//         dfs(v);
//         cycleExit = cycleExit || dfs(v, u);
//     }
// }
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     bool isCycle = false;
//     for (int i = 1; i <= n; i++)
//     {
//         if (visited[i] == true)
//             continue;
//         isCycle = isCycle || dfs(i);
//     }

//     if(isCycle)
//     {
//         cout<<"cycle directed !"<<endl;
//     }
//     else
//     {
//         cout<<"No cycle directed"<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
bool dfs(int u, int p = -1)
{
    bool cycleExit = false;
    visited[u] = true;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        if (visited[v] == true)
            return true;
        dfs(v);
        cycleExit = cycleExit || dfs(v, u);
    }
    return cycleExit;
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
    bool isCycle = false;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == true)
            continue;
        isCycle = isCycle || dfs(i);
    }

    if (isCycle)
    {
        cout << "cycle decteted !" << endl;
    }
    else
    {
        cout << "No cycle" << endl;
    }
    return 0;
}