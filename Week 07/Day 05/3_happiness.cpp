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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (ceil((double)a / arr[i]) > 2 || ceil((double)arr[i] / a) > 2)
            {
            }
            else
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
