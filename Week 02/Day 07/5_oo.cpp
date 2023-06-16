#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    const long long M = 1e9;
    cin>>N;

    unordered_map<long long, int>mp;

    for(int i=1; i<=N; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    auto it = mp.begin();

    while(it!= mp.end())
    {
        if(it->second==1)
        {
            cout<<it->first<<endl;
            break;
        }
        it++;
    }

    return 0;
}

