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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        int ans = 0;
        int index = 0;
        stack<int> st;

        for (int i = 1; i < n; i++)
        {
            st.push(v[i]);
            if (v[i] < v[i - 1] && i < n - 1 && v[i] > v[i + 1])
            {
            }
            else if (v[i] < v[i - 1])
            {

                if (v[i] >= st.top())
                {
                    ans += i - index - 1;
                }
                else
                {
                    ans += i - index;
                    st.pop();
                    st.push(v[i]);
                }
                // cout << index << " " << i << " " << v[i] << " " << ans << endl;

                index = i;
            }
        }
        cout << ans + st.size() << endl;
    }

    return 0;
}
