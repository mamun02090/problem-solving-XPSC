#include <bits/stdc++.h>
#include <map>

using namespace std;

long long M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    vector<long long> v(100001);
    v[1] = 1;
    for (int i = 2; i < 100001; i++)
    {
        v[i] = ((i << 1) - 1ll) * v[i - 1] % 1000000007 * (i << 1) % 1000000007;
    }
    while (T--)
    {
        int n;
        cin >> n;
        long long ans = v[n];
        cout << ans << endl;
    }

    return 0;
}
