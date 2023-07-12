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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }

        auto it = st.begin();
        int tmp = *it;
        it++;
        bool isOne = true;
        while (it != st.end())
        {
            int a = *it;
            if (a - tmp > 1)
            {
                isOne = false;
                break;
            }
            tmp = a;
            it++;
        }
        if (isOne)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
