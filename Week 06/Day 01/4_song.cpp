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
        int n, k, l;
        cin >> n >> k >> l;

        multimap<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            mp.insert({a, b});
        }
        auto it = mp.rbegin();
        int ans = 0;
        while (it != mp.rend())
        {
            int length = it->first;
            int lang = it->second;
            if (lang == l)
            {
                ans += length;
                k--;
            }

            if (k == 0)
                break;
            it++;
        }
        if (k == 0)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
