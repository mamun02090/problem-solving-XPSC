#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (abs(h - v[i]) == k * j)
                {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
