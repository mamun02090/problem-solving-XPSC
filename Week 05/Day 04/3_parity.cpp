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
        int n, k;
        cin >> n >> k;
        queue<int> q;
        if (n % k == 0)
        {
            for (int i = 0; i < k; i++)
                cout << n / k << " ";
            cout << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            while (k > 0)
            {
                int div = n / k;

                if (div % 2 != 0 && div > 1)
                {
                    div--;
                }
                if (n % k == 0)
                {
                    for (int i = 0; i < k; i++)
                        q.push(n / k);
                    n = 0;
                    k = 0;
                }
                else
                {
                    q.push(div);
                    n -= div;
                    k--;
                }
            }
        }
        else
        {
            while (k > 0)
            {
                int div = n / k;

                if (div % 2 == 0)
                {
                    div--;
                }
                if (n % k == 0)
                {
                    for (int i = 0; i < k; i++)
                        q.push(n / k);
                    n = 0;
                    k = 0;
                }
                else
                {
                    q.push(div);
                    n -= div;
                    k--;
                }
            }
        }
        if (n == 0)
        {
            cout << "YES" << endl;
            while (!q.empty())
            {
                cout << q.front() << " ";
                q.pop();
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
