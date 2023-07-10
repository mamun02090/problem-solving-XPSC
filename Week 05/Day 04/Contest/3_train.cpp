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
        long long L, v, l, r;
        cin >> L >> v >> l >> r;
        int i = 1;
        if (L == r && v == l)
        {
            cout << 0 << endl;
            continue;
        }

        int points = L / v;
        int lpoints = (l - 1) / v;
        int rpoints = r / v;
        int ans = points - (rpoints - lpoints);

        cout << ans << endl;
    }

    return 0;
}
