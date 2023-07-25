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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            v[i] = a;
        }
        auto it = mp.find(v[0]);
        if (it->second < k)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (it->second == n && it->second >= k)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (v[0] == v[n - 1] && it->second >= k)
        {
            cout << "YES" << endl;
            continue;
        }
        // cout << it2->first << " " << it2->second << endl;

        // cout << lastIndex << endl;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (it->first == v[i])
            {
                cnt++;
            }
            if (cnt == k)
            {
                cnt = i;
                break;
            }
        }
        auto firstIndex = v.begin() + cnt;
        int lastValueCount = count(firstIndex, v.end(), v[n - 1]);

        // cout << lastValueCount << endl;
        if (lastValueCount >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
