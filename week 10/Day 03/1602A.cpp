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
        string tmp = s;
        sort(tmp.begin(), tmp.end());
        int ind = s.find(tmp[0]);
        s.erase(ind, 1);
        cout << tmp[0] << " " << s << endl;
    }

    return 0;
}
