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
        long long n;
        cin >> n;
        int tmp = ceil(sqrt(n));
        bool isOdDiv = false;
        if (n % 2 != 0)
            isOdDiv = true;
        else
        {
            // for (int i = 2; i <= tmp / 2; i++)
            // {
            //     int tmp2 = tmp + 2 - i;
            //     if (((n % i == 0) && (i % 2 != 0 || ((n / i) % 2 != 0)) && n / i != 1) || ((n % tmp2 == 0) && (tmp2 % 2 != 0 || ((n / tmp2) % 2 != 0)) && n / tmp2 != 1))
            //     {
            //         isOdDiv = true;
            //         break;
            //     }
            // }
            if (n & (n - 1))
                isOdDiv = true;
        }
        if (isOdDiv)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
