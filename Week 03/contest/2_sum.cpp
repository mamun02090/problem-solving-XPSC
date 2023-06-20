

#include <bits/stdc++.h>

using namespace std;
/*
1
10
1 1 2 3 3 7 8 9 5 4
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<long long> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(a!=0)
            v.push_back(a);

        }
        bool isNegative = false;
        int ans=0;
        long long sum = 0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<=0 )
                {
                    isNegative = true;
                    sum+= (-1)*v[i];
                }
            else {
                if(isNegative)
                {
                    ans++;
                    isNegative = false;
                }
                sum+= v[i];
            }
        }
        if(isNegative)
            ans++;



        cout<<sum<<" "<<ans<<endl;
    }


    return 0;
}



