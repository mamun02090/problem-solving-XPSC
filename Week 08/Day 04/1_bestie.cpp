#include <bits/stdc++.h>
#include <map>

using namespace std;

int gcd(long long x, int y)
{
    while (y != 0)
    {
        int tmp = y;
        y = x % y;
        x = tmp;
    }
    return x;
}

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
        vector<long long> v(n);
        bool isGCDOne = false;
        int gcdOfAll = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (i != 1)
            {
                gcdOfAll = gcd(a, v[i - 1]);

                if ( gcdOfAll== 1)
                {
                    isGCDOne = true;
                }
                
            }
            v[i] = a;
        }
        if (isGCDOne)
        {
            cout << 0 << endl;
            continue;
        }

    }

    return 0;
}
