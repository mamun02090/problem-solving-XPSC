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
        vector<int> v1(a);
        vector<int> v2(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < a; i++)
        {
            cin >> v2[i];
        }
        if ((v1[0] != v2[0] && v2[0] == 0) || (v1[a - 1] != v2[a - 1] && v2[a - 1] == 0))
        {
            cout << "NO" << endl;
            continue;
        }
        bool isPossible = true;
        for (int i = 1; i < a - 1; i++)
        {

            if (v1[i] != v2[i] && v2[i] == 0)
            {
                isPossible = false;
                break;
            }
            if (v1[i] != v2[i])
            {
                v1[i] = v1[i - 1] + v1[i] + v1[i + 1];
            }
        }
        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
