// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 5;
// int adjmat[N][N];
// int main()
// {
//     cout << "Numbers of nodes input nilam" << endl;
//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < m; i++) // edge er input nilam
//     {
//         cout << "(u) << (v) <<(w)" << endl;
//         int u, v, w; // weight graph
//         cin >> u >> v >> w;

//         adjmat[u][v] = w; // direct graph
//         adjmat[v][u] = w; // undirect graph
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << adjmat[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// prectice
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
int adjmat[N][N];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adjmat[u][v] = w;
        adjmat[v][u] = w;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << adjmat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}