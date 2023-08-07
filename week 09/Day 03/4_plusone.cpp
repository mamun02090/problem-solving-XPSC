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

        int N;
        cin >> N;
        vector<int> v(N);
        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[N - 1] - v[0] << endl;
    }

    return 0;
}