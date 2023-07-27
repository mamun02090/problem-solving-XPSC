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
        int x, y;
        cin >> x >> y;
        if (x * 5 >= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
