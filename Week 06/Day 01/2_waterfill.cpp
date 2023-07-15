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
        if (a + b + c > 1)
            cout << "Not now" << endl;
        else
            cout << "Water filling time" << endl;
    }

    return 0;
}
