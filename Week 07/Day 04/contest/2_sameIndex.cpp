#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if ((a & 1) == 0)
            even++;
        else
            odd++;
    }
    if (odd > even)
        cout << even << endl;
    else
        cout << odd << endl;

    return 0;
}
