

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
        multiset<int> st1;
        multiset<int> st2;
        for(int i=0; i<N; i++)
        {
            int a;
            cin>>a;
            st1.insert(a);
        }
        for(int i=0; i<M; i++)
        {
            int a;
            cin>>a;
            int b = a*H;
            st2.insert(b);
        }
        auto it = st1.rbegin();
        auto it2= st2.rbegin();
        int ans = 0;
        if(M>N)
        {
            while(it!=st1.rend())
            {
                int car = *it2;
                int out = *it;
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
                    int car = *it2;
                    int out = *it;
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


