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
        if (a == b && (c & 1 == 1))
        {
            cout << "First" << endl;
        }
        else if (a == b && (c & 1 == 0))
            cout << "Second" << endl;
        else if (a > b)
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }

    return 0;
}
