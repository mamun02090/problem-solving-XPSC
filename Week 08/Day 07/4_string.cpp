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
        string str;
        cin >> str;
        int sz = str.size();
        int track = 0;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (str[i - 1] == str[n - i])
            {
                track = i;
                break;
            }
        }
        if (track == 0)
            cout << 0 << endl;
        else
            cout << n - (2 * (track - 1)) << endl;
    }

    return 0;
}
