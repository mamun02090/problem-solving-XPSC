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
        vector<int> v(n);
        map<int, int> mp;
        map<int, vector<int>> mpVec;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<int> tmpVec = v;
        int q;
        cin >> q;
        while (q--)
        {
            int a;
            long long b;
            cin >> a >> b;
            int tmp = b < n ? b : n;
            if (tmp <= mpVec.size() && tmp != 0)
            {
                vector<int> ans = mpVec[tmp];
                cout << ans[a - 1] << endl;
                continue;
            }

            for (int i = mpVec.size() + 1; i <= tmp; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int x = mp[v[j]];
                    v[j] = x;
                }
                mpVec[i] = v;
                mp.clear();
                for (int j = 0; j < n; j++)
                {
                    mp[v[j]]++;
                }
            }
            if (b == 0)
            {
                cout << tmpVec[a - 1] << endl;
            }
            else
                cout << v[a - 1] << endl;
        }
    }

    return 0;
}
/*
1
2
2 1
4
1 0
2 0
1 1
2 1
1
13
4 9 5 7 8 9 4 6 7 3 10 6 6
25
9 9
12 21
1 18
9 5
5 8
5 21
2 19
5 20
3 18
13 5
1 14
13 19
13 3
8 16
8 20
1 18
7 21
13 6
13 23
2 21
9 16
6 25
13 21
9 25
9 0
*/