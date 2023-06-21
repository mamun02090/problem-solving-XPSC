

#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        map<string, int> mp;
        for(int i=0; i<N; i++)
        {
            string s;
            cin>>s;
            mp[s]++;
        }
        int ans1 = mp["A"]+mp["AB"]+ mp["O"];
        int ans2 = mp["B"]+mp["AB"]+ mp["O"];
        int ans = max(ans1, ans2);

        cout<<ans<<endl;

    }


    return 0;
}


