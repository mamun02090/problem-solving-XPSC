


#include<bits/stdc++.h>


using namespace std;

int digitCounts(int n, int x)
{
    int ans =0;
    while(n>0)
    {
        ans++;
        n = n/x;
    }
    return ans;
}

int main()
{
    string S, T;
    cin>>S>>T;
    if(S==T)
    {
        cout<<0<<endl;
        return 0;
    }
    int ans=0;
    for(int i=0; i<S.size(); i++)
    {
        if(S[i]!= T[i])
        {
            S[i]=T[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}



