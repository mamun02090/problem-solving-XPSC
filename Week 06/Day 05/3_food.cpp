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
        double m, n;
        cin >> n >> m;
        n -= n * 0.1;
        if (n < m)
            cout << "ONLINE" << endl;
        else if (m < n)
            cout << "DINING" << endl;
        else
            cout << "EITHER" << endl;
    }

    return 0;
}
