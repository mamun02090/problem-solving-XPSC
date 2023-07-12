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
        string unqsub = "";
        for (int i = 0; i < b; i++)
        {
            unqsub += 'a' + i;
        }
        string sub = unqsub;
        int remainingChar = (n - b) / b;
        int r = (n - b) % b;
        for (int i = 0; i < remainingChar; i++)
        {
            sub += unqsub;
        }
        for (int i = 0; i < r; i++)
        {
            sub += unqsub[i];
        }
        cout << sub << endl;
    }

    return 0;
}
