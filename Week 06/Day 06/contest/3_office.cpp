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
        multiset<int> st;
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (st.empty() || st.find(a) == st.end())
                st.insert(a);
            else
            {
                int sz = st.size();
                ans = max(ans, sz);
                st.erase(a);
            }
        }
        int sz = st.size();
        cout << max(ans, sz) << endl;
    }

    return 0;
}
