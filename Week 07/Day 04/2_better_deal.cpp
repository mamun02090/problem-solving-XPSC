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
        int x = 100 - a;
        int y = 200 - (b * 2);

        if (x < y)
            cout << "First" << endl;
        else if (x > y)
            cout << "Second" << endl;
        else
            cout << "BOTH" << endl;
    }

    return 0;
}
