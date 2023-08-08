#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {

        string str;
        cin >> str;
        string str2 = str;
        reverse(str2.begin(), str2.end());
        cout << str << str2 << endl;
    }

    return 0;
}