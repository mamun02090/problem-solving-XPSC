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
        int c = a ^ b;
        cout << c << endl;
    }

    return 0;
}