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
        int n, q;
        cin >> n >> q;
        vector<long long> v(n + 1);
        vector<long long> prefixSum(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            prefixSum[i] = prefixSum[i - 1] + v[i];
        }
        long long sum = 0;
        while (q--)
        {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long tmpSum = prefixSum[n] - (prefixSum[r] - prefixSum[l - 1]);
            sum = tmpSum + (r - l + 1) * k;
            if ((sum & 1) != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
