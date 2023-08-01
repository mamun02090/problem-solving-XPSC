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
        long long a, b, c;
        cin >> a >> b >> c;
        if (a > b && b < c)
        {
            cout << -1 << endl;
            continue;
        }
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c + 1 << endl;
        }
    }

    return 0;
}