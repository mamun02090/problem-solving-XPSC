#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < (1 << n); i++)
    {
        int clock = 0;
        int a_clock = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) == 0)
                clock += a[j];
            else
                a_clock += a[j];
        }
        if (clock == a_clock)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if ((a_clock == 0 && clock != 0 && clock % 360 == 0) || (clock == 0 && a_clock != 0 && a_clock % 360 == 0))
        {
            cout << "YES" << endl;
            return 0;
        }
        else if ((abs(a_clock - clock)) % 360 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
