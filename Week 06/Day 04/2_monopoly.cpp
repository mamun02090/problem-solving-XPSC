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
        int p, q, r, s;
        cin >> p >> q >> r >> s;

        int sumExA = q + r + s;
        int sumExB = p + r + s;
        int sumExC = p + q + s;
        int sumExD = p + r + q;

        if (p > sumExA || q > sumExB || r > sumExC || s > sumExD)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}
