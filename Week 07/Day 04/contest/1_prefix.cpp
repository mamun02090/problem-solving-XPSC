#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string str;
    cin >> str;
    string ans = "";
    int cnt = 0;
    for (int i = 0; i < n - 1; i = i + 2)
    {
        if (str[i] == str[i + 1])
        {
            cnt++;
            if (str[i] == 'a')
                str[i + 1] = 'b';
            else
                str[i] = 'a';
        }
    }

    cout << cnt << '\n'
         << str << endl;

    return 0;
}
