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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<string> st;
        string tmp = "";
        int a, b;
        string sub = "";
        for (int i = 0; i < m; i++)
        {

            cin >> a >> b;
            tmp = s;
            sub = tmp.substr(a - 1, b - a + 1);
            sort(sub.begin(), sub.end());
            int j = 0;
            for (int k = a - 1; k < b; k++)
            {
                tmp[k] = sub[j];
                j++;
            }
            st.insert(tmp);
        }
        cout << st.size() << endl;
        st.clear();
        tmp.clear();
        sub.clear();
        }

    return 0;
}
