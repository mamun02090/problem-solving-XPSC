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
        map<int, int> mp;
        for (int i = 0; i < n * 2; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        auto it = mp.begin();
        set<int> st;
        while (it != mp.end())
        {
            st.insert(it->second);
            it++;
        }
        auto ans = st.rbegin();
        cout << *ans << endl;
    }

    return 0;
}
