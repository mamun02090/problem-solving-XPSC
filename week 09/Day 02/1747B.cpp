#include <bits/stdc++.h>

using namespace std;

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
        if (n == 1)
        {
            cout << 1 << "\n"
                 << 1 << " " << 3 << endl;
            continue;
        }
        cout << n - 1 << endl;
        for (int i = 1; i < n; i++)
        {

            cout << 3 * (i - 1) + 1 << " ";
            int a = 3 * n - i + 1;
            if (a % 3 == 1)
            {
                cout << a - 1 << endl;
            }
            else
                cout << a << endl;
        }
    }

    return 0;
}