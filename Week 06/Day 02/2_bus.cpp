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
        if (a <= 10)
            cout << "Lower Double" << endl;
        else if (a > 10 && a < 16)
            cout << "Lower Single" << endl;
        else if (a > 15 && a < 26)
            cout << "Upper Double" << endl;
        else
            cout << "Upper Single" << endl;
    }

    return 0;
}
