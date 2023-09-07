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
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            int pass = ((b + 1) / 2) - 1;
            int passedRoom = pass + a;
            ans = min(ans, passedRoom);
        }
        cout << ans << endl;
    }
    return 0;
}
