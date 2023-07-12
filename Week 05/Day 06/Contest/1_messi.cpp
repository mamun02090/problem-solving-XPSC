#include <bits/stdc++.h>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int messi = a * 2 + b;
    int ron = x * 2 + y;
    if (messi > ron)
        cout << "Messi" << endl;
    else if (messi < ron)
        cout << "Ronaldo" << endl;
    else
        cout << "Equal" << endl;

    return 0;
}
