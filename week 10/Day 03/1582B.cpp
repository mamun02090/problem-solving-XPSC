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
        long long c0 = 0;
        long long c1 = 0;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;

            if (a == 0)
                c0++;
            if (a == 1)
                c1++;
        }
        long long ans = pow(2, c0) * c1;
        cout << ans << endl;
    }

    return 0;
}
