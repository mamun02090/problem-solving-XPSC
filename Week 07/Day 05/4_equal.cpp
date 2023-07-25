#include <bits/stdc++.h>
#include <map>

using namespace std;

bool cmp(int a, int b)
{
    if (a > b)
        return true;
    return false;
}

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

        if ((n & 1) != 0)
            cout << -1 << endl;
        else
        {
            cout << 1 << " ";
            for (int i = 2; i <= n; i = i + 2)
                cout << i << " ";
            for (int i = 3; i <= n; i = i + 2)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}
