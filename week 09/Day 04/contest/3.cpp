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
        map<long long, int> mp;
        multimap<long long, int> mmp;
        set<long long> st;
        for (int i = 0; i < (n * (n - 1)) / 2; i++)
        {
            long long x;
            cin >> x;
            mp[x]++;
            st.insert(x);
        }
        if (st.size() > n - 1)
        {
            auto it = st.begin();
            while (it != st.end())
            {
                cout << *it << " ";
                it++;
            }
            it--;
            cout << *it << endl;
        }
        else
        {
        }
    }

    return 0;
}
