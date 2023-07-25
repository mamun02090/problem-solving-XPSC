#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multimap<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        mp.insert({a, i});
    }
    auto it = mp.rbegin();
    int ans = 1;
    int cnt = 1;
    vector<int> v;
    v.push_back(it->second);
    it++;
    while (it != mp.rend())
    {
        ans += (it->first) * cnt + 1;
        v.push_back(it->second);
        cnt++;
        it++;
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
