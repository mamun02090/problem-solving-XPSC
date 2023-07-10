#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string str;

    cin >> n >> str;
    int ans = INT_MIN;
    string str2 = "";
    for (int i = 0; i < n - 1; i++)
    {
        {
            string sub = str.substr(i, 2);
            int cnt = 1;
            for (int j = i + 1; j < n - 1; j++)
            {
                {
                    string sub2 = str.substr(j, 2);

                    if (sub == sub2)
                    {
                        cnt++;
                    }
                }
            }
            if (ans < cnt)
            {
                str2 = sub;

                ans = cnt;
            }
        }
    }
    cout << str2 << endl;

    return 0;
}
