#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int sum = v[3];

    int x = v[0], y = v[1], z = v[2];
    int a1 = sum - x;
    int a2 = y - a1;
    int a3 = z - a1;
    cout << a1 << " " << a2 << " " << a3 << endl;

    return 0;
}
