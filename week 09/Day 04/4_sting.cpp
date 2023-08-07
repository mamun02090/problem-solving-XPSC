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
        string sub = str.substr(0, 1);
        bool found = false;
        st.insert(str[0]);
        for (int i = 1; i < str.size() / 2; i++)
        {
            sub += str[i];
            int x = str.find(sub, i + 1);
            st.insert(str[i]);
            if (x == i + 1)
            {
                if (st.size() != 1)
                {
                    found = true;
                    cout << "YES" << endl;
                    st.clear();
                    break;
                }
            }
        }

        if (!found)
            cout << "NO" << endl;
    }

    return 0;
}
