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
        int x;

        cin >> x;
        int sum = 0;
        for (int i = 0; i < x; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        if ((sum & 1) == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
