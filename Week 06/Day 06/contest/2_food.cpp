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
        int x, y, r;
        cin >> x >> y >> r;
        int stick = x + r / 30;
        int plates = stick / y;
        if (stick % y != 0)
            cout << (stick / y) + 1 << endl;
        else
            cout << plates << endl;
    }

    return 0;
}
