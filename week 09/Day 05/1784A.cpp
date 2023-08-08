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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long ans = v[0] - 1;
        v[0] = 1;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] - v[i] > 1)
            {
                ans += v[i + 1] - v[i] - 1;
                v[i + 1] = v[i] + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
