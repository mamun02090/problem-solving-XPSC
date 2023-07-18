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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool found = false;
        for (int i = n - 1; i > 0; i--)
        {
            int a = arr[i] - arr[i - 1];

            for (int j = i; j > 1; j--)
            {
                for (int k = j; k > 1; k--)
                {
                    if (k != i - 1)
                    {
                        int b = arr[j] - arr[k - 2];
                        if (a == b)
                        {
                            found = true;
                            break;
                        }
                    }
                }
            }
            if (found)
                break;
        }

        if (!found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
