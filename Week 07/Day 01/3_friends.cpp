#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, k;
    cin >> n >> m >> k;
    int arr[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int diff = arr[i] ^ arr[m];
        // int tmp = 0;
        // while (diff != 0)
        // {
        //     tmp += (1 & diff);
        //     diff = diff >> 1;
        // }
        if (__builtin_popcount(diff) <= k)
            ans++;
    }

    cout << ans << endl;
    return 0;
}
