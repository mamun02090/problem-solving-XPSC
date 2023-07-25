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
        if (a == b & a % 2 != 0)
        {
            cout << "CHEF" << endl;
        }
        else
        {
            if (a - b > 1)
                cout << "CHEFINA" << endl;
            else
                cout << "CHEF" << endl;
        }
    }

    return 0;
}
