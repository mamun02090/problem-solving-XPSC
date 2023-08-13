#include <bits/stdc++.h>
#include <map>

using namespace std;

long long M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int n, H;
        cin >> n >> H;
        multiset<long long> st;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            st.insert(a);
        }
        auto it = st.rbegin();

        long long val1 = *it;
        it++;
        long long val2 = *it;
        long long val3 = val1 + val2;
        if (val1 >= H)
            cout << 1 << endl;
        else if (val3 >= H)
            cout << 2 << endl;
        else
        {
            int x = H % val3;
            if (x == 0)
                cout << (H / val3) * 2 << endl;
            else if (x <= val1)
                cout << (H / val3) * 2 + 1 << endl;
            else
                cout << (H / val3) * 2 + 2 << endl;
        }
    }

    return 0;
}
