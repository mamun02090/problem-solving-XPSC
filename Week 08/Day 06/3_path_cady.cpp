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
        int x = 0;
        int y = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'D')
                x--;
            else if (str[i] == 'U')
                x++;
            else if (str[i] == 'R')
                y++;
            else
                y--;
            if (x == 1 && y == 1)
            {
                cout << "YES" << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "NO" << endl;
    }

    return 0;
}
