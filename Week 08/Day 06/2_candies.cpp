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
        int n;
        cin >> n;
        int oddSum = 0;
        int evenSum = 0;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                evenSum += a;
            }
            else
                oddSum += a;
        }
        if (evenSum > oddSum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
