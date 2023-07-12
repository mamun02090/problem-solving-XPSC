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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        for (int i = 0; i < n; i++)
        {
            set<int> st;
            int sz = st.size();
            for (int j = i + 1; j < n; j++)
            {
                int s = v[i] + v[j];
                st.insert(s);
                int sz2 = st.size();
                if (sz != sz2)
                {
                    mp[s]++;
                    cout << s << endl;
                    sz = sz2;
                }
            }
        }
        auto it = mp.begin();

        set<int> vec;
        while (it != mp.end())
        {
            cout << it->first << " " << it->second << endl;
            vec.insert(it->second);
            it++;
        }

        auto ans = vec.rbegin();
        // ans--;
        cout << *ans << " " << vec.size() << endl;
    }

    return 0;
}
