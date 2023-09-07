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
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        int ans = 0;
        while (a < b)
        {
            ans++;
            if (c > (b - a) / 2)
                break;
            a += c;
            b -= c;
        }
        cout << ans << endl;
    }
    return 0;
}
