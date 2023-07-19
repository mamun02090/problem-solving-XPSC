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
        vector<long long> st;

        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            st.push_back(a);
        }
        int ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int sum = st[i] + st[i + 1] + st[i + 2];
            if (sum % 3 != 0)
            {
                ans += 3 - (sum % 3);
                st[i + 2] += 3 - (sum % 3);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
