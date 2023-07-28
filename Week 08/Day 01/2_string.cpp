#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 1;
        cin >> n;
        string s, p;
        p = "";
        cin >> s;
        if (n == 1)
        {
            cout << s << endl;
            continue;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                k++;
                if (i == n - 2)
                {
                    if (k % 2 == 1)
                        p += s[i];
                    else
                    {
                        p += s[i];
                        p += s[i];
                    }
                }
            }
            else
            {
                if (k % 2 == 1)
                    p += s[i];
                else
                {
                    p += s[i];
                    p += s[i];
                }
                if (i == n - 2)
                {
                    p += s[n - 1];
                }
                k = 1;
            }
        }
        cout << p << endl;
    }
    // your code goes here
    return 0;
}