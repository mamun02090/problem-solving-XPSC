#include <bits/stdc++.h>
#include <map>

using namespace std;

long long M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        int ans = 1;
        if (v[0] == 1)
            ans++;
        for (int i = a - 1; i >= 1; i--)
        {
            if (v[i] == 0 && v[i - 1] == 0)
            {
                ans = 0;
                break;
            }
            if (v[i] == 1 && v[i - 1] == 1)
                ans += 5;
            else if (v[i] == 1)
                ans++;
        }

        if (ans)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
