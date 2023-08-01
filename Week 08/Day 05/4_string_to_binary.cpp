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
        bool found = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "NO" << endl;
            continue;
        }
        string tmp = str;
        tmp[0] = '0';
        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                if (tmp[i] == '0' || tmp[i] == '1')
                    continue;
            }
            char ch = '0';
            if (i % 2 != 0)
            {
                ch = '1';
            }
            tmp[i] = ch;
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    tmp[j] = ch;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (tmp[i] == tmp[i + 1])
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
