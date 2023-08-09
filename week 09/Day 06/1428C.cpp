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
        string str;
        cin >> str;
        int abIndex = str.find("AB");
        while (abIndex != str.npos)
        {
            str.erase(abIndex, 2);
            abIndex = str.find("AB");
        }
        int BBIndex = str.find("BB");
        while (BBIndex != str.npos)
        {
            str.erase(BBIndex, 2);
            BBIndex = str.find("BB");
        }

        cout << str.size() << endl;
    }

    return 0;
}
