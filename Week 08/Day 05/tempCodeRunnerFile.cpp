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
        long long n;
        cin >> n;
        if ((n & 1) != 0)
        {
            cout << 1 << endl;
            continue;
        }
        int prev = 1;
        int i = 2;
        int cnt = 1;
        int ans = INT_MIN;
        int tmp = sqrt(n) + 1;
        while (1)
        {

            if ((n % i == 0) && (i == prev + 1))
            {
                cout << i << endl;
                cnt++;
            }
            else
            {
                ans = max(cnt, ans);
                cnt = 0;
            }
            if (i >= tmp || i > 1000)
                break;
            prev = i;
            i++;
        }
        ans = max(cnt, ans);
        cout << ans << endl;
    }

    return 0;
}
