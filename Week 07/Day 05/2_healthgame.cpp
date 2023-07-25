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
        int h, x, y;
        cin >> h >> x >> y;
        int ans = ceil((double)(h - y) / x) + 1;
        cout << ans << endl;
    }

    return 0;
}
