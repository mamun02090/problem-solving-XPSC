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
        vector<int> v(n + 1);
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (i == a)
            {
                cnt++;
            }
        }
        if (cnt == 0)
            cout << 0 << endl;
        else
            cout << ((cnt - 1) / 2) + 1 << endl;
    }

    return 0;
}
