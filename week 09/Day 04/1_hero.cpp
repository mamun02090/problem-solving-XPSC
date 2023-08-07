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
        priority_queue<long long> pq;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            if (a == 0 && (!pq.empty()))
            {

                ans += pq.top();
                pq.pop();
            }
            else
            {
                if (a != 0)
                    pq.push(a);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
