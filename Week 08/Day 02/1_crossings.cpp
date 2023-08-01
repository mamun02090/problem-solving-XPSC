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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {

            for (int j = i - 1; j >= 0; j--)
            {
                if (a[i] <= a[j])
                    ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}