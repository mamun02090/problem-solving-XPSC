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
        int a, b;
        cin >> a >> b;

        int profit = a < b ? (b - a) * 2 + a : b;
        cout << profit << endl;
    }

    return 0;
}
