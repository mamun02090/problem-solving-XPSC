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
        int x, y, z;
        cin >> x >> y >> z;
        if ((x * y) % z == 0)
            cout << x * y << " " << z << endl;
        else if ((x * z) % y == 0)
            cout << x * z << " " << y << endl;
        else if ((y * z) % x == 0)
            cout << y * z << " " << x << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
