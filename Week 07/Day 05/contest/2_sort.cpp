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
        multiset<long long> oddSet;
        multiset<long long> evenSet;
        vector<int> even;
        vector<int> odd;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if ((a & 1) == 0)
            {
                evenSet.insert(a);
                even.push_back(i);
            }
            else
            {
                oddSet.insert(a);
                odd.push_back(i);
            }
        }
        vector<long long> v(n);
        auto it1 = oddSet.begin();
        for (int i = 0; i < odd.size(); i++)
        {
            v[odd[i]] = *it1;
            it1++;
        }
        auto it2 = evenSet.begin();
        for (int i = 0; i < even.size(); i++)
        {
            v[even[i]] = *it2;
            it2++;
        }
        vector<long long> tmp = v;
        sort(v.begin(), v.end());
        bool isPossible = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != tmp[i])
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
