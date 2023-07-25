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
        map<int, int> mp;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            mp[a] = i;
            v.push_back(a);
        }
        auto it = mp.begin();
        int curr = it->first;
        int ans = it->second - 1;
        int tmp = it->second;

        for (int i = tmp + 1; i <= n; i++)
        {
        }

        cout << ans << endl;
    }

    return 0;
}
