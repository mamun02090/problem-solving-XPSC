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
        if (((n & (n - 1)) == 0))
            cout << n - 1 << endl;
        else
        {
            int bits = 0;
            long long tmp = n;
            while (tmp)
            {
                bits++;
                tmp >>= 1;
            }
            bits--;
            long long ans = n & (1 << bits);
            cout << ans - 1 << endl;
        }
    }

    return 0;
}