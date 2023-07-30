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
        long long k;
        cin >> n >> k;
        multimap<long long, int, greater<long long>> mp;
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            long long a;
            cin >> a;
            if (a >= k)
            {
                long long tmp = a % k;
                if (tmp == 0)
                {
                    v.push_back(i);
                }
                else
                    mp.insert({tmp, i});
            }
            else
            {
                mp.insert({a, i});
            }
        }
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        auto it = mp.begin();
        while (it != mp.end())
        {
            cout << it->second << " ";
            it++;
        }
        cout << endl;
    }

    return 0;
}
