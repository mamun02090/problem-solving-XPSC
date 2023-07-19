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
            st.push_back(a * (-1));
        }
        sort(st.begin(), st.end());
        vector<long long> v;
        st[0] = st[0] * (-1);
        for (int i = 1; i < n; i++)
        {
            st[i] = st[i] * (-1) + st[i - 1];
        }
        sort(st.begin(), st.end());
        for (int i = n - 1; i >= 0; i--)
        {

            cout << st[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
