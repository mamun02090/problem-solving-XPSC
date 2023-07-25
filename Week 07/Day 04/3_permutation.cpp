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
        for (int i = a / 2; i >= 1; i--)
            cout << i << " ";
        for (int i = (a / 2) + 1; i < a; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
