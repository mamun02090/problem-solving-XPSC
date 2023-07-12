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
        int n, m;
        cin >> n >> m;
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            if (a >= m)
                ans++;
        }
        if (n >= ans)
            cout << ans << endl;
        else
            cout << n << endl;
    }

    return 0;
}
