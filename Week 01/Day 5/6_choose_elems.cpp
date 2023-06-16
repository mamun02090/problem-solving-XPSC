#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin>>N>>K;
    vector< long long> st(N);
    for(int i=0; i<N; i++)
    {
        cin>>st[i];
    }
    sort(st.begin(), st.end());
    long long ans =0;
    for(int i=1; i<=K; i++)
    {
        if(st[N-i]>0)
            ans+=st[N-i];
    }

    if(ans<0) cout<<0<<endl;
    else cout<<ans<<endl;

    return 0;
}






