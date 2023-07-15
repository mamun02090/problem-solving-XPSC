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
        int arr[7];
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
        }
        cout << arr[0] << " " << arr[1] << " " << arr[6] - arr[0] - arr[1] << endl;
    }

    return 0;
}
