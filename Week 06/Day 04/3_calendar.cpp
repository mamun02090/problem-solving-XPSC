
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
        string s;
        cin >> s;
        string first = s.substr(0, 2);
        string second = s.substr(3, 2);

        int a = stoi(first);
        int b = stoi(second);
        if (a <= 12 && b <= 12)
            cout << "BOTH" << endl;
        else if (a > 12)
            cout << "DD/MM/YYYY" << endl;
        else
            cout << "MM/DD/YYYY" << endl;
    }

    return 0;
}
