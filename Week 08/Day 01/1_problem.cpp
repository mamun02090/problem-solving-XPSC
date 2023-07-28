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
        int n, a, b;
        cin >> n >> a >> b;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                sum += a;
            else
                sum += b;
        }
        cout << sum << endl;
    }

    return 0;
}