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
        int a;
        cin >> a;
        if (a % 2 == 0 && a % 7 == 0)
            cout << "Alice" << endl;
        else if (a % 2 != 0 && a % 9 == 0)
            cout << "Bob" << endl;
        else
            cout << "Charlie" << endl;
    }

    return 0;
}
