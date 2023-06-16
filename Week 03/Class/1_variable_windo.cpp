
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long k, sum=0;

    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans = 0;

    int i =0, j=0;
    while(j<n)
    {
        sum+=a[j];
        if(sum>k)
        {
            while(sum<=k)
            {
                sum-= a[i];
                i++;
            }
        }
        if(sum==k)
        {
            int tmp = j-i+1;
            ans = max(ans, tmp);

        }
        j++;
    }

    cout<<ans<<endl;
    return 0;
}

