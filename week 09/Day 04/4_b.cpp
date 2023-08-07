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
        string str;
        cin >> str;

        set<char> st;
        for (int i = 0; i < str.size(); i++)
        {
            st.insert(str[i]);
        }
        if (st.size() == 1)
        {
            if (str.size() % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            continue;
        }
        st.clear();
        string sub = str.substr(0, (1 + str.size()) / 2);
        // cout << sub << endl;
        int i = str.find(sub, (1 + str.size()) / 2);
        // cout << i << endl;
        if (i > 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
