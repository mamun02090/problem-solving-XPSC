
#include<bits/stdc++.h>


using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans =0;
    long long max_even = 0;
    multiset<long long> ml;
    for(int i=0; i<n; i++)
    {
        long long a;
        cin>>a;
        if(a%2==0)
            ans+=a;
        else ml.insert(a);
    }
    long long sz = ml.size();
    if(sz%2==0)
    {
        for(auto it: ml)
        {
            long long x = it;
            ans+= x;
        }
    }else{
        auto it = ml.rbegin();
        while(sz>1)
        {
            ans+= *it;
            it++;
            sz--;
        }
    }


    cout<<ans<<endl;
    return 0;
}

