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
        if (n * 4 <= 1000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
