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
        int a, b, c;
        cin >> a >> b >> c;
        int sub = b + c;
        int ans = 0;
        if (a > sub)
            ans = 2 * sub + 1;
        else
            ans = 2 * a - 1;
        cout << ans << endl;
    }

    return 0;
}
