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
        int three = 0, five = 0, seven = 0;
        bool isPossible = true;
        while (n > 0)
        {

            int x = n - 7;
            int y = n - 5;
            int z = n - 3;

            if ((x % 3 == 0 || x % 5 == 0 || x % 7 == 0) && x >= 0)
            {
                seven++;
                n -= 7;
            }
            else if ((y % 3 == 0 || y % 5 == 0 || y % 7 == 0) && y >= 0)
            {
                five++;
                n -= 5;
            }
            else if ((z % 3 == 0 || z % 5 == 0 || z % 7 == 0) && z >= 0)
            {
                three++;
                n -= 3;
            }
            else
            {
                cout << -1 << endl;
                isPossible = false;
                break;
            }
        }
        if (isPossible)
            cout << three << " " << five << " " << seven << endl;
        else
            continue;
    }

    return 0;
}
