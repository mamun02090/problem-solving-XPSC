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
        string s;
        cin >> s;
        bool isRamos = true;
        for (int i = 1; i < n; i = i + 2)
        {
            int ch = s[i - 1] - '0';
            int ch2 = s[i] - '0';
            if (ch ^ ch2)
            {
                isRamos = !isRamos;
                        }
        }
        if (isRamos)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }

    return 0;
}
