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
        vector<int> vNeg, vPos;
        int sum = 0;
        int negSum = 0;
        int posSum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a < 0)
            {
                vNeg.push_back(a);
                negSum += a * (-1);
            }
            else
            {
                vPos.push_back(a);
                posSum += a;
            }
            sum += a;
        }
        if (sum == 0)
            cout << "NO" << endl;
        else
        {
            sort(vNeg.begin(), vNeg.end());
            sort(vPos.begin(), vPos.end());
            cout << "YES" << endl;
            vector<int> v2;
            int negSz = vNeg.size();
            int posSz = vPos.size();
            if (negSum > posSum)
            {
                for (int i = negSz - 1; i >= 0; i--)
                {
                    cout << vNeg[i] << " ";
                }
                for (int i = posSz - 1; i >= 0; i--)
                {
                    cout << vPos[i] << " ";
                }
            }
            else
            {
                for (int i = posSz - 1; i >= 0; i--)
                {
                    cout << vPos[i] << " ";
                }
                for (int i = negSz - 1; i >= 0; i--)
                {
                    cout << vNeg[i] << " ";
                }
            }

            cout << endl;
        }
    }

    return 0;
}
