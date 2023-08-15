#include <bits/stdc++.h>
#include <map>

using namespace std;

long long M = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int a;
        cin >> a;
        cout << 1 << " ";
        for (int i = 1; i <= a; i = i * 2)
        {
            if (i * 2 <= a)
            {
                cout << i * 2 << " ";
            }
        }

        for (int i = 3; i <= a; i = i + 2)
        {
            cout << i << " ";
            int tmp = i * 2;

            while (tmp <= a)
            {
                cout << tmp << " ";
                tmp *= 2;
            }
        }
        cout << endl;
    }

    return 0;
}
