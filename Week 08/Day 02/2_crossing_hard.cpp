#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        pbds<int> pb;
        long long ans = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                pb.insert(a[i]);
            else
            {
                int y = pb.order_of_key(a[i]);
                int tmp = pb.size() - y;
                ans += tmp;
                pb.insert(a[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}