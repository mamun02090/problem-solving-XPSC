

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
        long long sum = n;
        while(n>=1)
        {
            sum+= n/2;
            n= n/2;
        }
        cout<<sum<<endl;
    }


    return 0;
}



