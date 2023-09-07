#include <bits/stdc++.h>
#include <map>

using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int m, n;
        cin >> m >> n;
        if ((m & 1) == 0)
        {
            if (gcd(m / 2, m / 2) != 1)
            {
                cout << m / 2 << " " << m / 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if ((n & 1) == 0)
        {
            if (gcd(n / 2, n / 2) != 1)
            {
                cout << n / 2 << " " << n / 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (m != n)
        {
            if ((m & 1) != 0)
                m++;
            if (gcd(m / 2, m / 2) != 1)
            {
                cout << m / 2 << " " << m / 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            int tmp = m / 2;
            int rm = m - tmp;
            bool f = false;
            while (tmp > 1)
            {
                tmp--;
                rm++;
                if (gcd(rm, tmp) != 1)
                {
                    f = true;
                    break;
                }
            }
            if (f)
                cout << tmp << " " << rm << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}
