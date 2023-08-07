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

        string str;
        cin >> str;
        if (str[0] - '0' >= 5)
        {
            cout << 10;
            for (int i = 1; i < str.size(); i++)
            {
                cout << 0;
            }
            cout << endl;
            continue;
        }
        int ind = 0;
        int sz = str.size();
        for (int i = sz - 1; i >= 1; i--)
        {
            int x = str[i] - '0';
            int y = str[i - 1] - '0';

            if (x >= 5)
            {
                str[i] = '0';
                y++;
                if (y == 10)
                {
                    while (1)
                    {
                        i--;
                        if (i <= 0 || str[i - 1] - '0' < 9)
                            break;
                    }
                    str[i] = '0';
                    int z = str[i - 1] - '0';
                    z++;
                    str[i - 1] = z + '0';
                }
                else
                {
                    str[i - 1] = y + '0';
                }
                ind = i;
            }
        }
        if (str[0] - '0' >= 5)
        {
            cout << 10;
            for (int i = 1; i < str.size(); i++)
            {
                cout << 0;
            }
            cout << endl;
        }
        else if (ind == 0)
            cout << str << endl;
        else
        {
            for (int i = 0; i < str.size(); i++)
            {
                if (i < ind)
                    cout << str[i];
                else
                    cout << 0;
            }
            cout << endl;
        }
    }

    return 0;
}
