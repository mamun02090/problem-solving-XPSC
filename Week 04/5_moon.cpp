

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
        int N, M, H;
        cin>>N>>M>>H;
        multiset<long long> st1;
        multiset<long long> st2;
        for(int i=0; i<N; i++)
        {
            long long a;
            cin>>a;
            st1.insert(a);
        }
        for(int i=0; i<M; i++)
        {
            long long a;
            cin>>a;
            long long b = a*H;
            st2.insert(b);
        }
        auto it = st1.rbegin();
        auto it2= st2.rbegin();
        long long ans = 0;
        if(M>N)
        {
            while(it!=st1.rend())
            {
                long long car = *it2;
                long long out = *it;
                if(car>out)
                    ans+=out;
                else ans+=car;
                it2++;
                it++;
            }
        }
        else
        {
            {
                while(it2!=st2.rend())
                {
                    long long car = *it2;
                    long long out = *it;
                    if(car>out)
                        ans+=out;
                    else ans+=car;
                    it++;
                    it2++;
                }
            }
        }

        cout<<ans<<endl;



    }


    return 0;
}


