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
        int n, v;
        cin >> n >> v;
        if (n <= v * 2)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}
