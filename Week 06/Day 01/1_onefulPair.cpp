#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    int sum = n + x + (n * x);
    string s = to_string(sum);
    bool found = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '1')
        {
            found = false;
            break;
        }
    }
    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
