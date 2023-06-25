



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
        int n, k;
        cin>>n>>k;
        multimap<long long, int> mp;
        for(int i=0; i<n; i++)
        {
            long long a;
            cin>>a;
            mp.insert({a, i});
        }
        for(int i=0; i<k; i++)
        {
            int a,b;
            cin>>a>>b;
            auto it = mp.find(a);
            auto tmp = it;
            int x=0;
            it++;

            while(it!=mp.end())
            {
                if(it->first==b)
                {
                    x = it->second;
                    break;
                }
                it++;
            }
            cout<<x<<endl;
            if(tmp->second<x)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}




