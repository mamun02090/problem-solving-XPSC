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
        multiset<int> mst;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mst.insert(a);
        }
        int ans = INT_MAX;
        auto it = mst.begin();
        int tmp = *it;
        it++;
        while (it != mst.end())
        {
            int x = *it;
            int dif = x - tmp;
            ans = min(ans, dif);
            tmp = x;
            it++;
        }

        cout << ans << endl;
    }

    return 0;
}
