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
        int a;
        long long b;
        cin >> a >> b;
        int ans = 0;
        if (a == 3 || a == 7 || a == 5)
        {
            a += a;
            ans++;
        }
        else if (a == 9)
        {
            a += 3;
            ans++;
        }
        cout << (b - a + 1) / 2 + ans << endl;
    }

    return 0;
}
