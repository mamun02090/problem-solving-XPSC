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
        map<long long, int> mp;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            mp[a]++;
        }

        auto it = mp.begin();
        int ans = it->second;
        while (it != mp.end())
        {
            long long value = it->first;
            int cnt = it->second;

            it++;
            if (it != mp.end())
            {
                long long value2 = it->first;
                int cnt2 = it->second;
                if (value2 - value == 1)
                {
                    if (cnt2 > cnt)
                    {
                        ans += cnt2 - cnt;
                    }
                }
                else
                {
                    ans += cnt2;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
