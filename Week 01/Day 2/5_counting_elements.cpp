#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mp;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    mp[arr[0]]=1;

    for(int i=1; i<n;i++)
    {
        if(mp.count(arr[i])>0)
        {
            mp[arr[i]]++;
        }
        mp.insert({arr[i], 1});
    }
    int ans =0;

    auto it = mp.begin();
    while(it != mp.end())
    {
         if(mp.count(it->first + 1)>0)
            ans += it->second;
         ++it;
    }
    cout<<ans<<endl;

    return 0;
}
