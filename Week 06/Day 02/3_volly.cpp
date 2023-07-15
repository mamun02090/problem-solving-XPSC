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
        int a;
        cin >> a;
        string s;
        cin >> s;
        int alice = 0;
        int bob = 0;
        if (s[0] == 'A')
            alice = 1;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == s[i - 1])
            {
                if (s[i] == 'A')
                    alice++;
                else
                    bob++;
            }
        }
        cout << alice << " " << bob << endl;
    }

    return 0;
}
