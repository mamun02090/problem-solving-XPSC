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
        long long a, b, c;
        cin >> a >> b >> c;
        long long s = (a + b * 2 + c * 3) % 2;
        cout << s << endl;
    }

    return 0;
}
