#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        auto small = lower_bound(v.begin(), v.end(), x);
        auto tall = upper_bound(v.begin(), v.end(), x);
        int smallest = small - v.begin(), tallest = tall - v.begin();
        if (smallest == 0)
        {
            cout << 'X' << " ";
        }
        else
        {
            cout << v[smallest - 1] << " ";
        }
        if (tallest == n)
        {
            cout << 'X' << endl;
        }
        else
        {
            cout << v[tallest] << endl;
        }
    }

    return 0;
}
