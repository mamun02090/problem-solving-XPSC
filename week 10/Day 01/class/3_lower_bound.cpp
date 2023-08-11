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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);

        cout << it - v.begin() << endl;
    }

    return 0;
}
