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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        multimap<int, int> st;
        for (int i = 1; i < n; i++)
        {
            st.insert(abs(arr[i] - arr[i - 1]), );
        }
        auto it = st.begin();
        int ans = *it;
        it++;
        if (it != st.end())
        {
        }
        cout << *it << endl;
    }

    return 0;
}
