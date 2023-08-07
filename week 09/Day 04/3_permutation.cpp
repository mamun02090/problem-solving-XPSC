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
        int n, a, b;
        cin >> n >> a >> b;
        int middle = n / 2;
        if (n - a < middle - 1 || b <= middle - 1)
        {
            cout << -1 << endl;
            continue;
        }
        else if ((n - a == middle - 1 && b > a) || b == middle && a <= middle - 1)
        {
            cout << -1 << endl;
            continue;
        }
        int arr[n + 1] = {0};
        cout << a << " ";
        int cnt = 1;
        arr[a] = 1;
        for (int i = n; i > a; i--)
        {

            if (i == b || i == a)
                continue;
            cout << i << " ";
            arr[i] = 1;
            cnt++;
            if (cnt == middle)
                break;
        }

        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != 1)
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
