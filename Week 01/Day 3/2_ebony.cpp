
#include<bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<bool> dp(c + 1, false);
    dp[0] = true;

    for (int i = 1; i <= c; i++) {
        if (i >= a && dp[i - a]) {
            dp[i] = true;
        } else if (i >= b && dp[i - b]) {
            dp[i] = true;
        }
    }


    if(dp[c]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

