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
        vector<long long> v(n+1) ;
        long long sum=0;
        map<int, int> mp;
        for(long long i=1; i<=n; i++)
        {
            char ch;
            cin>>ch;
            if(ch=='L')
                mp[i] = i-1;
            else mp[i] = n-i;
            sum+=mp[i];

        }
        long long maxSum = 0;
        for(int i=1; i<=n/2; i++)
        {
            maxSum+= (n-i)*2;
        }
        if(n%2!=0)
        {
            maxSum+= (n/2);
        }
        long long ans=sum;
        auto it = mp.begin();
        auto it2 = mp.end();
        it2--;
        int i=1;
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        while(i<=n)
        {


            int tmp = it->first;
            int tmp2= it2->first;
//            cout<<tmp<<" "<<tmp2<<endl;

            if(ans==maxSum)
            {

                    cout<<maxSum<<" ";
                i++;
                it++;
                continue;
            }
            int s1=0, s2=0;


            if(it->second<n-tmp)
                s1 = n-tmp;

            if(it2->second<tmp2-1)
                s2 = tmp2-1;

            if(s1>=s2 && s1!=0 )
            {
                ans+= s1 - mp[tmp];
                cout<<ans<<" ";
                i++;
                if(s2!=0)
                {
                    ans+= s2 - mp[tmp2];
                    cout<<ans<<" ";
                    i++;
                }
                it++;
                it2--;
            }
            else if(s2>s1 && s2!=0)
            {

                ans+= s2 - mp[tmp2];
                cout<<ans<<" ";
                i++;
                if(s1!=0)
                {
                    ans+= s1 - mp[tmp];
                    cout<<ans<<" ";
                    i++;
                }
                it++;
                it2--;
            }else if(s1==0 && s2==0)
            {
                it++;
                it2--;
                continue;
            }
        }
        cout<<endl;


    }


    return 0;
}




