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
        int r;
        cin >> r;
        if (r == 50)
            cout << 0 << endl;
        else if (r < 50)
        {
            if (r % 2 == 0)
                cout << (50 - r) / 2 << endl;
            else
                cout << ((50 - r + 3) / 2) + 1 << endl;
        }
        else
        {
            if ((r - 50) % 3 == 0)
                cout << (r - 50) / 3 << endl;
            else
            {
                int ans = 0;
                while (r > 48)
                {
                    r -= 3;
                    ans++;
                }
                cout << ((50 - r) / 2) + ans << endl;
            }
        }
    }

    return 0;
}
