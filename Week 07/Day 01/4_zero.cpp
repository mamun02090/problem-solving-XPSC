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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for (int i = 0; i <= 1 << 8; i++)
        {
            ans = 0;
            vector<int> v = a;
            for (int j = 0; j < n; j++)
            {
                v[j] = v[j] ^ i;
            }

            for (int j = 0; j < n; j++)
            {
                ans = ans ^ v[j];
            }
            if (ans == 0)
            {
                cout << i << endl;
                break;
            }
        }
        if (ans != 0)
            cout << -1 << endl;
    }

    return 0;
}
