
#include<bits/stdc++.h>


using namespace std;

int main()
{
    long long S, N;
    cin>>S>>N;
    int ans =0;
    while(S<=N)
    {
        S += S;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
