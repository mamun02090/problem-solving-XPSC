#include <bits/stdc++.h>

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

        int sum = 0;
        vector<int> v;

        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        vector<int> v2 = v;
        sort(v2.begin(), v2.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] != v2[1])
                cout << i + 1 << endl;
        }
    }

    return 0;
}
