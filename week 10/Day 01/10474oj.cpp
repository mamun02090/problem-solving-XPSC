#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 1;

    while (1)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;
        vector<int> v(n);
        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << i << ":" << endl;
        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(v.begin(), v.end(), x);
            int ind = it - v.begin();

            if (v[ind] == x)
            {
                cout << x << " found at " << ind + 1 << endl;
            }
            else
                cout << x << " not found" << endl;
        }
        i++;
    }

    return 0;
}
