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
        int a;
        cin >> a;
        multiset<int> st;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        auto it = st.begin();
        int minElem = *it;
        int cnt = st.count(minElem);
        cout << st.size() - cnt << endl;
    }

    return 0;
}
