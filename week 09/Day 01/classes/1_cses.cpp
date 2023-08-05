#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    map<int, long long> mp;
    for (int i = 0; i < T; i++)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    long long sum = 0, ans = 0;
    for (auto it : mp)
    {
        sum += it.second;
        ans = max(ans, sum);
    }
    cout << ans << endl;

    return 0;
}
