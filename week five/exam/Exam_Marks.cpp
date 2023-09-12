#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int sum = 1000 - target;
        bool dp[n + 1][sum + 1];

        dp[0][0] = true;
        for (int i = 1; i <= sum; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (ar[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - ar[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][sum])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}