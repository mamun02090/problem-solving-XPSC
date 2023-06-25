

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
        long long n;
        cin>>n;
        long long tmp = n;
        int digit=0;
        while(n>0)
        {
            digit++;
            n=n/10;
        }
        long long ans = tmp - pow(10, digit-1);


        cout<<ans<<endl;
    }


    return 0;
}


