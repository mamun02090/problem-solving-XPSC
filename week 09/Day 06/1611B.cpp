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
        long long a, b;
        cin >> a >> b;
        long long sum = a + b;
        long long teams = sum / 4;
        if (teams > a)
            cout << a << endl;
        else if (teams > b)
            cout << b << endl;
        else
            cout << teams << endl;
    }

    return 0;
}
