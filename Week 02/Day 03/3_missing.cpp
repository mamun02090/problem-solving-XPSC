#include<bits/stdc++.h>


using namespace std;

int main()
{

    long long n;
    cin>>n;
    long long sum=0;
    for(int i=0; i<n-1; i++)
    {
        long long a;
        cin>>a;
        sum+=a;

    }
    long long ans= ((n*(n+1))/2)-sum;
    cout<<ans<<endl;

    return 0;
}



