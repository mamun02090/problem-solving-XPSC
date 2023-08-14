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
        long long a, b, c;
        cin >> a >> b >> c;
        int diff = a + c - 2 * b;
        if (diff % 3 == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
            cout << 1 << endl;
    }

    return 0;
}
