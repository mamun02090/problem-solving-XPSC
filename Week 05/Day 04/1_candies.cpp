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
        int n;
        cin >> n;
        if (n % 2 == 0)
            cout << (n / 2) - 1 << endl;
        else
            cout << (n - 1) / 2 << endl;
    }

    return 0;
}
