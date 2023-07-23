#include <bits/stdc++.h>
#include <map>

using namespace std;

bool cmp(int a, int b)
{
    if (a > b)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        vector<int> v(a + 1);
        for (int i = 1; i <= a; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), cmp);

        cout << v[b - 1] - 1 << endl;
    }

    return 0;
}
