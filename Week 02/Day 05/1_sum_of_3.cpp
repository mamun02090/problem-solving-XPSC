#include<bits/stdc++.h>


using namespace std;

int main()
{
    long long n, k;
    cin>>k>>n;
    int ans =0;
    map<int, int> mp;
    for(int i=0; i<=k; i++)
    {

        for(int j=0; j<=k; j++)
        {
            mp[i+j]++;
        }
    }
    for(int i=0; i<=k; i++)
    {
        if(mp.find((n-i))!= mp.end())
            ans+= mp[n-i];
    }



    cout<<ans<<endl;
    return 0;
}
