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
            int c;
            cin >> c;
            st.insert(c);
        }
        auto it = st.rbegin();
        int a = *it;
        it++;
        int b = *it;
        cout << a + b << endl;
    }

    return 0;
}
