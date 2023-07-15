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
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }
        int ans = n - st.size();
        auto it = st.begin();
        ans++;
        int val = *it;
        bool found = false;
        it++;
        while (it != st.end() && st.size() > 1)
        {

            if ((*it) - val <= 1)
            {

                found = true;
            }
            val = *it;
            it++;
        }
        st.clear();
        if (found)
            ans++;
        cout << ans << endl;
    }

    return 0;
}
