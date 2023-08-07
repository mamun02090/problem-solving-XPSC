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

        string s;
        cin >> s;
        bool isCorrect = true;
        if (N != 5)
        {
            isCorrect = false;
        }
        else
        {
            sort(s.begin(), s.end());
            if (s != "Timru")
                isCorrect = false;
        }
        if (isCorrect)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}