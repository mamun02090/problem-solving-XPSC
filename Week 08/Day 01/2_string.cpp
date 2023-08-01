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
        string str;
        cin >> str;
        string ans = "";
        int cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {

            if (str[i] == str[i + 1])
            {
                cnt++;
                continue;
            }
            else
            {
                ans += str[i];
                if (cnt % 2 == 0)
                {

                    ans += str[i];
                    ans += str[i];
                }
                else
                {
                    ans += str[i];
                }
                cnt = 1;
            }
        }
        ans += str[n - 1];
        cout << ans << endl;
    }

    return 0;
}