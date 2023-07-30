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
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<long long> tmp = v;
        sort(tmp.begin(), tmp.end());
        if (v != tmp)
        {
            cout << 0 << endl;
            continue;
        }
        set<long long> st;
        for (int i = 0; i < n - 1; i++)
        {
            st.insert(abs(v[i] - v[i + 1]));
        }
        auto it = st.begin();
        int ans = (*it / 2) + 1;
        cout << ans << endl;
    }

    return 0;
}
