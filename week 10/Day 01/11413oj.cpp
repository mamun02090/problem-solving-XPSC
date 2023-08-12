#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    while (cin >> n >> q)
    {

        vector<int> v(n);
        int mx = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
            mx = max(mx, v[j]);
        }
        // sort(v.begin(), v.end());
        int l = mx, r = INT_MAX;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int s = 0, cnt = 1;
            for (int j = 0; j < n; j++)
            {
                if (s + v[j] <= mid)
                {

                    s += v[j];
                }
                else
                {
                    cnt++;
                    s = v[j];
                }
            }
            if (cnt > q)
            {
                l = mid + 1;
            }
            else
            {
                ans = mid;
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
